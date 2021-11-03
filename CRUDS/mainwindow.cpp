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
    }
    else

        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                   QObject::tr("ajout non effectue\n"
                               "click cancel te exit."), QMessageBox::Cancel);

}

void MainWindow::on_ButtonSupprimer_clicked()
{
    Bus B2; B2.setmatricule(ui->le_mat_sup->text().toInt());
    bool test=B2.supprimer(B2.getmatricule());
    QMessageBox msgBox;

    if(test)
    {
        ui->tab_Bus->setModel(B1.afficher());
        msgBox.setText("suppression avec succes");
    }
    else
    msgBox.setText("echec de suppression");
    msgBox.exec();

}
