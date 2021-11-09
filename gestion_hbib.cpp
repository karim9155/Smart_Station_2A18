#include "gestion_hbib.h"
#include "ui_gestion_hbib.h"
#include <QMessageBox>
gestion_hbib::gestion_hbib(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_hbib)
{
    ui->setupUi(this);

    //affichage contenu de la base
    show_tables();

}

gestion_hbib::~gestion_hbib()
{
    delete ui;
}




//********************************* get variables ************************************


//recuperation des donnees du formulaire


QString gestion_hbib::get_type() const { //combo box

    return ui->type->currentText();
}

QString gestion_hbib::get_code() const { //line edit

    return ui->code->text();
}

QString gestion_hbib::get_depart() const { //line edit

    return ui->depart->text();
}

QString gestion_hbib::get_arrive() const { //line edit

    return ui->arrive->text();
}


double gestion_hbib::get_prix() const{ //float

    return ui->prix->value();
}

QString gestion_hbib::get_date() const { //date
    return ui->date->date().toString("dd.MM.yyyy");
}

//remplissage des champs du formulaire a partir de la base

void gestion_hbib::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from tickets where code= :code");
    query.bindValue(":code", selected);
    query.exec();
    while(query.next()){

  ui->code->setText(query.value(0).toString()); //line edit
    ui->depart->setText(query.value(1).toString()); //line edit
      ui->arrive->setText(query.value(2).toString()); //line edit
   ui->type->setCurrentText(query.value(3).toString()); //combobox
   ui->date->setDate(QDate::fromString(query.value(5).toString(),"dd.MM.yyyy"));//date
     ui->prix->setValue(query.value(5).toReal()); // reel

    }

}



//************************************* CRUD ******************************************

//ajout
void gestion_hbib::on_actionadd_ticket_triggered()
{

    //recuperation des donnees
      QString s1=get_code();
      QString s2=get_depart();
      QString s3=get_arrive();
      QString s4=get_type();
      QString s5=get_date();
      double x=get_prix();


      //ajout
      ticket s(s1,s2,s3,s4,s5,x);
      s.ajouter();

      //refresh du tableau (affichage)
        show_tables();
	QMessageBox::information(nullptr, QObject::tr ("TICKET ADD"),
                                      QObject::tr("TICKET ADDED SUCCESSFULY .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);
}

//get id of selected row
void gestion_hbib::on_tableau_tickets_clicked(const QModelIndex &index)
{
selected=ui->tableau_tickets->model()->data(index).toString();
}

//suppression
void gestion_hbib::on_actiondelete_ticket_triggered()
{
    ticket s;
  s.supprimer(selected);

 //refresh du tableau (affichage)
   show_tables();
	QMessageBox::information(nullptr, QObject::tr ("TICKET DELEGTE"),
                                      QObject::tr("TICKET DELETED SUCCESSFULY .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);
}

//modification

void gestion_hbib::on_actionedit_ticket_triggered()
{
    //recuperation des donnees
    QString s1=selected;
    QString s2=get_depart();
    QString s3=get_arrive();
    QString s4=get_type();
    QString s5=get_date();
    double x=get_prix();


      //mofication
      ticket s(selected,s2,s3,s4,s5,x);
      s.modifier(selected);



    //refresh du tableau (affichage)
     show_tables();
	QMessageBox::information(nullptr, QObject::tr ("TICKET MODIFY"),
                                      QObject::tr("TICKET MODIFIED SUCCESSFULY .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);
}

void gestion_hbib::on_tableau_tickets_doubleClicked(const QModelIndex &index)
{
  fill_form(selected);
}

//affichage
void gestion_hbib::show_tables(){
//creation model (masque du tableau) : permet recherche et tri
    proxy = new QSortFilterProxyModel();

 //definir la source (tableau original)
    proxy->setSourceModel(tmp.afficher());

 //pour la recherche
    proxy->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
    proxy->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone
   //remplissage tableau avec le masque
    ui->tableau_tickets->setModel(proxy);

}


//************************************* Metiers ***************************************


//recherche dynamique
void gestion_hbib::on_sel_col_currentIndexChanged(int index)
{
    sel_col=ui->sel_col->currentIndex()-1;
        proxy->setFilterKeyColumn(sel_col); // chercher dans tout le tableau (-1) ou donner le numero de la colone
}

void gestion_hbib::on_rech_textChanged(const QString &arg1)
{
    proxy->setFilterFixedString(arg1);
}



void gestion_hbib::on_actionstats_triggered()
{
    s = new stat_combo();

  s->setWindowTitle("statistique ComboBox");
  s->choix_bar();
  s->show();
}

void gestion_hbib::on_btnAdd_clicked()
{
    on_actionadd_ticket_triggered();
}

void gestion_hbib::on_btnEdit_clicked()
{
on_actionedit_ticket_triggered();
}

void gestion_hbib::on_btnDelete_clicked()
{
  on_actiondelete_ticket_triggered();
}
