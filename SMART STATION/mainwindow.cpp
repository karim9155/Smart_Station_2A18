#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bus.h"
#include <QIntValidator>
#include <QApplication>
#include <QMessageBox>
#include <QTableView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_matricule ->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_Bus->setModel(B1.afficher());
    ui->comboBox->addItems(B1.lister());
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_Button_Ajouter_clicked()
{
    QString marque =ui->le_marque->text();
    QString type =ui->le_type->text();
    int matricule =ui->le_matricule->text().toInt();
    int puissance =ui->le_puissance->text().toInt();
    Bus B(marque,type,matricule,puissance);
    bool test=B.ajouter();


    if(test)
    {
        ui->tab_Bus->setModel(B1.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                   QObject::tr("ajout effectue\n"
                               "click cancel te exit."), QMessageBox::Cancel);

        ui->comboBox->clear();

          ui->comboBox->addItems(B1.lister());
    }

    else

        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                   QObject::tr("ajout non effectue\n"
                               "click cancel te exit."), QMessageBox::Cancel);

}

void MainWindow::on_ButtonSupprimer_clicked()
{
    Bus C1;
       C1.setmatricule(ui->comboBox->currentText().toInt());


       // if ( C1.verificationID()==0)

       //{
           bool test =C1.supprimer(C1.getmatricule())    ;
       if(test)
       {
           QMessageBox::information(nullptr, QObject::tr("Ok"),
                QObject::tr("Suppression effectué.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
      ui->tab_Bus->setModel(B1.afficher())    ;
      ui->comboBox->clear();
      ui->comboBox->addItems(B1.lister());
       }
       else
       {
           QMessageBox::information(nullptr, QObject::tr("Not Ok"),
                QObject::tr("Suppression non effectué.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
       }


}

void MainWindow::on_Button_Modification_clicked()
{
    int matricule = ui->le_matricule_2->text().toInt();
    QString type= ui->le_type_2->text();
     QString marque= ui->le_marque_2->text();
     int puissance = ui->le_puissance_2->text().toInt();

    Bus c(marque, type, matricule, puissance);
    bool test=c.modifier(matricule);
    if(test)
    {

        ui->tab_Bus->setModel(c.afficher());//refresh

               QMessageBox::information(nullptr, QObject::tr("effectué"),
                    QObject::tr(" Modifié.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
               ui->le_matricule_2->clear();
               ui->le_type_2->clear();
               ui->le_marque_2->clear();
               ui->le_puissance_2->clear();
   }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("non effectué"),
                    QObject::tr("non modifié !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
       /* ui->le_matricule_2->clear();
        ui->le_type_2->clear();
        ui->le_marque_2->clear();
        ui->le_puissance_2->clear();*/



    }

}

