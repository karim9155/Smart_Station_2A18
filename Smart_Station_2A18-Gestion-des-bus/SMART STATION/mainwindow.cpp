#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bus.h"
#include <QIntValidator>
#include <QApplication>
#include <QMessageBox>
#include <QTableView>
#include <QDate>
#include "QSqlQuery"
#include "qcustomplot.h"
#include <QTableView>
#include <qmessagebox.h>
#include <QIntValidator>
#include <QSqlQuery>
#include <QScrollBar>
#include <qfiledialog.h>
#include <QTextDocument>
#include <QTextStream>
#include <QDate>
#include <QComboBox>
#include <QPixmap>
#include <connection.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->le_matricule ->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_Bus->setModel(B1.afficher());
    ui->comboBox->addItems(B1.lister());
    ui->label_pic->hide();
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


void MainWindow::on_tripuissance_clicked()
{
    ui->tab_Bus->setModel(B1.trierpuissance());
}


void MainWindow::on_trimarque_clicked()
{
     ui->tab_Bus->setModel(B1.triermarque());
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    Bus B3;
QString marque = ui->lineEdit->text();
int matricule = ui->lineEdit->text().toInt();
int puissance= ui->lineEdit->text().toInt();
B3.recherche(ui->tab_Bus,marque,matricule,puissance);
if (ui->lineEdit->text().isEmpty())
{
    ui->tab_Bus->setModel(B3.afficher());
}
}

void MainWindow::on_stat_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
    Bus S;


    S.stat(ui->widget);
}

void MainWindow::on_pushButton_clicked()
{
    ui->label_pic->show();
    QPixmap pix("C:/Users/azert/Desktop/2eme/Projet C++/Smart_Station_2A18-Gestion-des-bus/SMART STATION/map.png");
    ui->label_pic->setPixmap(pix.scaled(1282,718,Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label_pic->hide();
}

