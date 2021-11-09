#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableRep->setModel(rep.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int ref=ui->ref->text().toInt();
    QString etat=ui->etat->text();
    float prix=ui->prix->text().toFloat();
    QString date_rep=ui->dateEdit->text();
    reparation r(ref,etat,prix,date_rep);
    r.ajouter();
    ui->tableRep->setModel(rep.afficher());
}

void MainWindow::on_pushButton_2_clicked()
{
    int ref=ui->ref->text().toInt();
    QString etat=ui->etat->text();
    float prix=ui->prix->text().toFloat();
    QString date_rep=ui->dateEdit->text();
    reparation r(ref,etat,prix,date_rep);
    r.modifier(ref);
    ui->tableRep->setModel(rep.afficher());
}

void MainWindow::on_pushButton_3_clicked()
{
    int ref=ui->refSupp->text().toInt();
    rep.supprimer(ref);
    ui->tableRep->setModel(rep.afficher());
}
