#include "dialogticket.h"
#include "ui_dialogticket.h"

#include <QMessageBox>
#include "mainwindow.h"
#include <QPdfWriter>
#include <QDesktopServices>
#include <QUrl>
#include <QPainter>
#include "stat_combo.h"
Dialogticket::Dialogticket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogticket)
{
    ui->setupUi(this);
    refresh();
}

Dialogticket::~Dialogticket()
{
    delete ui;
}
void Dialogticket::refresh(){
    ui->formlabel->setText("Ajout Ticket");
    ui->tabTicket->setModel(t.afficher());
    ui->comboType->setCurrentIndex(0);
    ui->t_arrive->clear();
    ui->t_depart->clear();
    ui->t_prix->clear();
    ui->modifierTbtn->hide();
    ui->supprimerTbtn->hide();
    ui->btnAjouter->show();
}

void Dialogticket::on_btnAjouter_clicked()
{
    QString code = "1";
    QString t_type = ui->comboType->currentText();
    QString t_depart = ui->t_depart->text();
    QString arrive = ui->t_arrive->text();
    int prix = ui->t_prix->text().toInt();
    QDate daaate = ui->t_date->date();
    QString t_date =daaate.toString("dd/MM/yyyy");
    if (t_type=="Type"){
        QMessageBox::critical(nullptr, QObject::tr("Ticket ajout"),
                                      QObject::tr("Choisir Type valide! .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);

    }
    else if(t_depart.size()<=2){
        QMessageBox::critical(nullptr, QObject::tr("Ticket ajout"),
                                      QObject::tr("Depart invalid ! .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);
        }
    else if(arrive.size()<=2){
        QMessageBox::critical(nullptr, QObject::tr("Ticket ajout"),
                                      QObject::tr("Arrive invalid ! .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);

    }
    else if(prix<=0){
        QMessageBox::critical(nullptr, QObject::tr("Ticket ajout"),
                                      QObject::tr("Prix invalid ! .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);

    }

    else{
    QSqlQuery q;
    q.prepare("select code from ticket order by code asc");
    if(q.exec()){
        while(q.next()){
            int id= q.value(0).toInt() + 1;
            code = QString::number(id);
        }

    }

    ticket s(code,t_depart,arrive,t_type,t_date,prix);
    bool validation = s.ajouter();
    if (validation){
        refresh();
        QMessageBox::information(nullptr, QObject::tr("Ticket ajout"),
                                      QObject::tr("Ticket ajouté.\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);

    }
    else if(!validation){
        QMessageBox::critical(nullptr, QObject::tr("Ticket ajout"),
                                      QObject::tr("Erreur conx!! .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);

    }
    }
}



void Dialogticket::on_tabTicket_activated(const QModelIndex &index)
{

    QString val=ui->tabTicket->model()->data(index).toString();
        QSqlQuery qry;
        qry.prepare("Select depart,arrive,prix from ticket where  code='"+val+"'");
        if(qry.exec())
        {
            while(qry.next())
                    {

                        ui->formlabel->setText(val);
                        ui->t_depart->setText(qry.value(0).toString());
                        ui->t_arrive->setText(qry.value(1).toString());
                        ui->t_prix->setText(qry.value(2).toString());
                        ui->modifierTbtn->show();
                        ui->supprimerTbtn->show();
                        ui->btnAjouter->hide();
                    }
        }
}

void Dialogticket::on_supprimerTbtn_clicked()
{
    bool test = t.supprimer(ui->formlabel->text());
    if(test){
        refresh();
        QMessageBox::information(nullptr, QObject::tr("Ticket Suppression"),
                                      QObject::tr("Ticket Supprimer!! .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);
    }
    else{
        QMessageBox::critical(nullptr, QObject::tr("Ticket Suppression"),
                                      QObject::tr("Ticket not found!! .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);

    }
}

void Dialogticket::on_modifierTbtn_clicked()
{
    QString code = ui->formlabel->text();
    QString t_type = ui->comboType->currentText();
    QString t_depart = ui->t_depart->text();
    QString arrive = ui->t_arrive->text();
    int prix = ui->t_prix->text().toInt();
    QDate daaate = ui->t_date->date();
    QString t_date =daaate.toString("dd/MM/yyyy");

    if (t_type=="Type"){
        QMessageBox::critical(nullptr, QObject::tr("Ticket ajout"),
                                      QObject::tr("Choisir Type valide! .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);

    }
    else if(t_depart.size()<=2){
        QMessageBox::critical(nullptr, QObject::tr("Ticket ajout"),
                                      QObject::tr("Depart invalid ! .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);
        }
    else if(arrive.size()<=2){
        QMessageBox::critical(nullptr, QObject::tr("Ticket ajout"),
                                      QObject::tr("Arrive invalid ! .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);

    }
    else if(prix<=0){
        QMessageBox::critical(nullptr, QObject::tr("Ticket ajout"),
                                      QObject::tr("Prix invalid ! .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);

    }

    else{


    ticket s(code,t_depart,arrive,t_type,t_date,prix);
    bool validation = s.modifier(code);
    if (validation){
        refresh();
        QMessageBox::information(nullptr, QObject::tr("Ticket modification"),
                                      QObject::tr("Ticket modifié.\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);

    }
    else if(!validation){
        QMessageBox::critical(nullptr, QObject::tr("Ticket modification"),
                                      QObject::tr("Erreur conx!! .\n"
                                                  "Click Ok to exit."), QMessageBox::Ok);

    }
    }
}

void Dialogticket::on_lineEdit_textChanged(const QString &arg1)
{
    if(arg1.size()<=0){
        refresh();
    }
    else{
        ui->tabTicket->setModel(t.recherche(arg1));
     }
}

void Dialogticket::on_comboBox_currentIndexChanged(int index)
{
    bool test =ui->triDesc->isChecked();
    if (!test){
        ui->tabTicket->setModel(t.afficherTri(index));
    }
    else if(test){
         ui->tabTicket->setModel(t.afficherTriDesc(index));
    }

}

void Dialogticket::on_btnCalendrier_clicked()
{
    MainWindow *w = new MainWindow();
    w->resize(640, 256);
    w->show();
}

void Dialogticket::on_imageBtn_clicked()
{
    QString t=ui->formlabel->text()+".pdf";
    QPdfWriter pdf("C:/Users/brahe/Desktop/ticket"+t);

                      QPainter painter(&pdf);
                     int i = 4000;
                      painter.drawPixmap(QRect(-100,-100,9800,100000),QPixmap("C:/Users/brahe/Desktop/image.jpg"));
                          painter.setPen(Qt::white);
                          painter.setFont(QFont("Impact", 30));
                          painter.drawText(2300,1200,"Ticket Numero "+ui->formlabel->text());
                          painter.setPen(Qt::black);
                          painter.setFont(QFont("IMPACT", 50));

                          painter.drawRect(1500,200,7300,2600);

                          painter.drawRect(0,3000,9600,500);
                          painter.setFont(QFont("Impact", 9));
                          painter.drawText(300,3300,"Type");
                          painter.drawText(2300,3300,"Depart");
                          painter.drawText(4300,3300,"Arrive");
                          painter.drawText(6300,3300,"PRIX");



                          QSqlQuery query;
                          query.prepare("select type,depart,arrive,prix from ticket where code=:id");
                          query.bindValue(":id",ui->formlabel->text().toInt());
                          query.exec();
                          while (query.next())
                          {
                              painter.drawText(300,i,query.value(0).toString());
                              painter.drawText(2300,i,query.value(1).toString());
                              painter.drawText(4300,i,query.value(2).toString());
                              painter.drawText(6300,i,query.value(3).toString());



                             i = i +500;
                          }
                          int reponse = QMessageBox::question(this, "Génerer Image", "<Image Enregistré>...Vous Voulez Affichez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);
                              if (reponse == QMessageBox::Yes)
                              {
                                  QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/brahe/Desktop/ticket"+t));

                                  painter.end();
                              }
                              if (reponse == QMessageBox::No)
                              {
                                   painter.end();
                              }
}

void Dialogticket::on_pushButton_clicked()
{
    s = new stat_combo();

  s->setWindowTitle("statistique ComboBox");
  s->choix_bar();
  s->show();
}
