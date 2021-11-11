   #include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employe.h"
#include <QMessageBox>
#include <QIntValidator>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  ui->lineEdit_Id->setValidator( new QIntValidator(0, 9999, this));
ui->Tab_employe->setModel(C.afficher());
ui->comboBox->addItems(C.lister());
ui->comboBox_2->addItems(C.lister());
connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
connect(ui->exitBtn, SIGNAL(clicked()),this, SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bt_Ajouter_clicked()
{
    int Id =ui->lineEdit_Id->text().toInt() ;
    QString Nom  = ui->lineEdit_Nom->text() ;

    QString Email  = ui->lineEdit_Email->text() ;
    int Tel =ui->lineEdit_Tel->text().toInt() ;

    employe C(Id,Nom,Email,Tel) ;
  bool test=C.ajouter();

  if(test)
  {
      QMessageBox::information(nullptr, QObject::tr("Ok"),
           QObject::tr("Ajout effectué.\n"
                       "Click Cancel to exit."), QMessageBox::Cancel);

      ui->Tab_employe->setModel(C.afficher())    ;
      ui->comboBox->clear();
      ui->comboBox->addItems(C.lister());
      ui->comboBox_2->clear();
      ui->comboBox_2->addItems(C.lister());

  }
  else
  {
      QMessageBox::information(nullptr, QObject::tr("Not Ok"),
           QObject::tr("Ajout non effectué.\n"
                       "Click Cancel to exit."), QMessageBox::Cancel);


  }


}

void MainWindow::on_Supp_Button_clicked()
{


    employe C1;
   C1.set_id(ui->comboBox->currentText().toInt());


   // if ( C1.verificationID()==0)

   //{
       bool test =C1.supprimer(C1.get_id())    ;
   if(test)
   {
       QMessageBox::information(nullptr, QObject::tr("Ok"),
            QObject::tr("Suppression effectué.\n"
                        "Click Cancel to exit."), QMessageBox::Cancel);
  ui->Tab_employe->setModel(C.afficher())    ;
  ui->comboBox->clear();
  ui->comboBox->addItems(C.lister());
   }
   else
   {
       QMessageBox::information(nullptr, QObject::tr("Not Ok"),
            QObject::tr("Suppression non effectué.\n"
                        "Click Cancel to exit."), QMessageBox::Cancel);


   }
    //}
   // else
    //{
      //  QMessageBox::warning(this, "Echec", "identifiant non existant !");


    //}

}



void MainWindow::on_bt_Ajouter_md_clicked()
{

    int Id =ui->comboBox_2->currentText().toInt();
    QString Nom= ui->lineEdit_Nom_md->text();
     QString Mail= ui->lineEdit_Email_md->text();
     int Tel = ui->lineEdit_Tel_md->text().toInt();

     employe c(Id, Nom, Mail, Tel);
    bool test=c.modifier(Id);
    if(test)
    {

        ui->Tab_employe->setModel(c.afficher());//refresh

               QMessageBox::information(nullptr, QObject::tr("effectué"),
                    QObject::tr(" Modifié.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

               ui->lineEdit_Nom_md->clear();
               ui->lineEdit_Tel_md->clear();
               ui->lineEdit_Email_md->clear();
  }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("non effectué"),
                    QObject::tr("non modifié !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

        ui->lineEdit_Nom_md->clear();
        ui->lineEdit_Tel_md->clear();
        ui->lineEdit_Email_md->clear();



    }

}

void MainWindow::sendMail()
{
    Smtp* smtp = new Smtp(ui->uname->text(), ui->paswd->text(), ui->server->text(), ui->port->text().toInt());
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}

void MainWindow::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}
