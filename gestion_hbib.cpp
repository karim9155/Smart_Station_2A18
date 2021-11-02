#include "gestion_hbib.h"
#include "ui_gestion_hbib.h"

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

//************************************* CRUD ******************************************

//ajout
void gestion_hbib::on_actionadd_ticket_triggered()
{
    //creation instance
        dialog_ticket ds(this);

        //ouvrir dialog
        int res=ds.exec();
        if (res == QDialog::Rejected )
            return;

    //recuperation des donnees
      QString s1=ds.get_code();
      QString s2=ds.get_depart();
      QString s3=ds.get_arrive();
      QString s4=ds.get_type();
      QString s5=ds.get_date();
      double x=ds.get_prix();


      //ajout
      ticket s(s1,s2,s3,s4,s5,x);
      s.ajouter();

      //refresh du tableau (affichage)
        show_tables();
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
}

//modification
void gestion_hbib::on_tableau_tickets_doubleClicked(const QModelIndex &index)
{
    dialog_ticket ds(this);

  ds.fill_form(selected);
  int res=ds.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
  QString s1=selected;
  QString s2=ds.get_depart();
  QString s3=ds.get_arrive();
  QString s4=ds.get_type();
  QString s5=ds.get_date();
  double x=ds.get_prix();


    //mofication
    ticket s(selected,s2,s3,s4,s5,x);
    s.modifier(selected);



  //refresh du tableau (affichage)
   show_tables();

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
