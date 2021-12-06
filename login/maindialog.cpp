#include "maindialog.h"
#include "ui_maindialog.h"
#include "mainwindow.h"
#include "employes/mainwindow1.h"
#include "reparation/mainwindow2.h"
#include "tickets/dialogticket.h"


MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    ui->setupUi(this);
}

MainDialog::~MainDialog()
{
    delete ui;
}

void MainDialog::on_BUS_clicked()
{
    bus = new MainWindow(this);
    bus->show();
}



void MainDialog::on_EMPLOYES_clicked()
{
    employes = new MainWindow1(this);
    employes->show();
}

void MainDialog::on_pushButton_3_clicked()
{
    reparation = new MainWindow2(this);
    reparation->show();
}

void MainDialog::on_pushButton_clicked()
{
    ticket = new Dialogticket(this);
    ticket ->show();
}
