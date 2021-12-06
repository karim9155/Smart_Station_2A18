#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "EQUIPEMENT.h"
#include "patient.h"
#include <QMessageBox>
#include<QString>
#include <QSystemTrayIcon>
#include <QCheckBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView_Patient->setModel(e.afficher());



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString CODE_A_BARRE= ui->lineEdit_CIN->text();
    QString TYPE= ui->comboBox_2->currentText();
    int PRIX= ui->lineEdit_nom->text().toInt();
    QDate DATE_D_ACHAT= ui-> dateEdit->date();
     int NOMBRE = ui-> lineEdit_duree->text().toInt();


    EQUIPEMENT p(CODE_A_BARRE,TYPE,PRIX,DATE_D_ACHAT,NOMBRE);
bool test=p.ajouter();
if(test)
   { ui->tableView_Patient->setModel(e.afficher());

    QMessageBox::information(nullptr, QObject::tr("Ajouter Patient"),
                QObject::tr("Patient ajouter.\n""Click Cancel to exit."), QMessageBox::Cancel);
}

else

{
    QMessageBox::critical(nullptr, QObject::tr("Ajouter Patient"),
                QObject::tr("Ajout echoué.\n""Click Cancel to exit."), QMessageBox::Cancel);

}
foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()) {
        widget->clear();
    }
}
void MainWindow::on_pushButton_15_clicked()
{
     QString CODE_A_BARRE= ui->lineEdit_cin_supp->text();
    bool test=e.supprimer(CODE_A_BARRE);

    if(test)
       { ui->tableView_Patient->setModel(e.afficher());

        QMessageBox::information(nullptr, QObject::tr("supprimer EQUIPEMENT"),
                    QObject::tr("EQUIPEMENT supprimer.\n""Click Cancel to exit."), QMessageBox::Cancel);
    }

    else

    {
        QMessageBox::critical(nullptr, QObject::tr("supprimer EQUIPEMENT"),
                    QObject::tr("suppression echoué.\n""Click Cancel to exit."), QMessageBox::Cancel);

    }
    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()) {
            widget->clear();
        }
}

void MainWindow::on_pushButton_3_clicked()
{
    QString CODE_A_BARRE= ui->lineEdit_CIN->text();
    QString TYPE= ui->comboBox->currentText();
    int PRIX= ui->lineEdit_nomp->text().toInt();
    QDate DATE_D_ACHAT= ui-> dateEdit->date();
     int NOMBRE = ui-> lineEdit_duree->text().toInt();



     bool test = e.update(CODE_A_BARRE,TYPE,PRIX,DATE_D_ACHAT,NOMBRE);


        if(test)

        {
            ui->tableView_Patient->setModel(e.afficher());

            QMessageBox::information(nullptr, QObject::tr("update "),
                        QObject::tr("EQUIPEMENT modifie\n"
        "Click Cancel to exit."), QMessageBox::Cancel);}
        foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()) {
                widget->clear();
            }
}




void MainWindow::on_groupBox_7_clicked()
{

}

void MainWindow::on_groupBox_3_clicked()
{

}

void MainWindow::on_pushButton_7_clicked()
{

}

void MainWindow::on_groupBox_clicked()
{

}

void MainWindow::on_pushButton_5_clicked()

    {

    QString CODE_A_BARRE= ui->lineEdit_11->text();
    QString TYPE=ui->lineEdit_12->currentText();
    int PRIX= ui->lineEdit_11->text().toInt();

        QSqlQueryModel *rech=e.rechercher_EQUIPEMENT(CODE_A_BARRE,TYPE,PRIX);
        {
            ui->tableView_Patient->setModel(rech);
        }
        foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()) {
            widget->clear();
        }

}

void MainWindow::on_lineEdit_11_cursorPositionChanged(int arg1, int arg2)
{

}

void MainWindow::on_pushButton_8_clicked()
{
     ui->tableView_Patient->setModel(e.afficher());
}
void MainWindow::on_tableView_Patient_clicked(const QModelIndex &index)
{

}

void MainWindow::on_pushButton_10_clicked()

    {
        if (ui->checkBoxEQUIPEMENT->isChecked())
        {
            ui->tableView_Patient->setModel(e.trier("PRIX"));
            QSystemTrayIcon * notifyIcon = new QSystemTrayIcon;
            notifyIcon-> show ();
            notifyIcon-> showMessage ( " GESTION EQUIPEMENT " , " PRIX Trié " , QSystemTrayIcon :: Information, 15000 );
        }
    }


void MainWindow::on_pushButton_6_clicked()
{

       e.exporter(ui->tableView_Patient);
   }

void MainWindow::on_pushButton_9_clicked()
{

        ui->tableView_Patient->setModel(e.historique());



}


void MainWindow::on_on_stat_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
    EQUIPEMENT E;


    E.stat(ui->widget);
}
