#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clients.h"
#include <QString>
#include <QMessageBox>
#include <QIntValidator>
#include <QSqlQueryModel>
#include <QSqlQuery>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   /* int ret=A.connect_arduino();
    switch (ret) {
    case(0):qDebug() <<"arduino is available and connected to :" <<A.getarduino_port_name();
        break;
    case(1):qDebug() <<"arduino is available but not connected to :" <<A.getarduino_port_name();
        break;
    case(-1):qDebug() <<"arduino is not available";

    }
    QObject::connect(A.getserial(),SIGNAL(readyRead()),this, SLOT(update_label()));*/

    ui->tab_clients->setModel(c.afficher());

    ui->le_id->setValidator( new QIntValidator(0, 9999, this));
    ui->rechercher->setValidator( new QIntValidator(0, 9999, this));

    ui->combo_id->addItems(c.lister());
    ui->combo_id_2->addItems(c.lister());


    ui->le_numero->setValidator( new QIntValidator(0, 99999999, this));
    ui->le_numero_2->setValidator( new QIntValidator(0, 99999999, this));

    ui->age_2->setValidator( new QIntValidator(0, 999, this));
    ui->age_3->setValidator( new QIntValidator(0, 999, this));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_ajouter_clicked()
{

    int id=ui->le_id->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    int numero=ui->le_numero->text().toInt();
    int age=ui->age_2->text().toInt();
   clients C(nom,prenom,age,id,numero);


   bool test = C.ajouter()    ;
   if(test)
   {
       ui->tab_clients->setModel(C.afficher())    ;

       QMessageBox::information(nullptr, QObject::tr("Ok"),
            QObject::tr("ajout effectué.\n"
                        "Click Cancel to exit."), QMessageBox::Cancel);
   }
   else
   {
       QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
            QObject::tr("ajout non effectué.\n"
                        "Click Cancel to exit."), QMessageBox::Cancel);

   }

}


void MainWindow::on_supp_button_clicked()
{

    int id=ui->combo_id_2->currentText().toInt();


   // {
    bool test = c.supprimer(id)    ;
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Ok"),
             QObject::tr("Suppression effectué.\n"
                         "Click Cancel to exit."), QMessageBox::Cancel);
   ui->tab_clients->setModel(c.afficher())    ;
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
             QObject::tr("Suppression non effectué.\n"
                         "Click Cancel to exit."), QMessageBox::Cancel);


    }
}



/******************************************************/

void MainWindow::on_modifier_button_clicked()
{
    QString nom= ui->le_nom_2->text();
     QString prenom= ui->le_prenom_2->text();
     int age = ui->age_3->text().toInt();
     int id = ui->combo_id->currentText().toInt();
     int numero = ui->le_numero_2->text().toInt();



    clients c(nom, prenom, age,id,numero);
    bool test=c.modifier(id);
    if(test)
    {

        ui->tab_clients->setModel(c.afficher());//refresh

               QMessageBox::information(nullptr, QObject::tr("effectué"),
                    QObject::tr(" Modifié.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

               ui->le_nom_2->clear();
               ui->le_prenom_2->clear();
               ui->le_numero_2->clear();
               ui->age_3->clear();

   }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("non effectué"),
                    QObject::tr("non modifié !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

        ui->le_nom_2->clear();
        ui->le_prenom_2->clear();
        ui->le_numero_2->clear();
        ui->age_3->clear();

 }
    ui->tab_clients->setModel(c.afficher());//refresh


}


void MainWindow::on_trialpha_clicked()
{
    ui-> tab_clients -> setModel (c. trieralpha ());

}

void MainWindow::on_triage_clicked()
{
    ui-> tab_clients -> setModel (c. trierage ());

}

 void MainWindow::on_stat_button_clicked()
{
    ui-> tabWidget_2 -> setCurrentIndex (3);
       clients e;
       e. stat (ui->widget);
}


void MainWindow::on_rechercher_button_clicked()
{
    int id=ui->rechercher->text().toInt();
           ui->tab_clients->setModel(c.rechercher(id));
}

void MainWindow::on_prendrephoto_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("choose"),"",tr("Images(*.png *.jpg *.jpeg *.bmp *.gif)"));
    if(QString::compare(filename,QString())!=0){
        QImage image;
        bool valid=image.load(filename);
        if(valid){
            image=image.scaledToWidth(ui->picture->width(),Qt::SmoothTransformation);
            ui->picture->setPixmap(QPixmap::fromImage(image));
        }
        else{
            //Error handling
        }
    }
}


/*
void MainWindow::update_label(){
 data=A.read_from_arduino();
 if(data=="1")
     ui->label_3->setText("ON");
 else if(data=="0")
     ui->label_3->setText("OFF");
}*/

void MainWindow::on_chat_pushButton_clicked()
{
    ui->saylineedit->text().toLatin1().data(),ui->saylineedit->text().size();
    ui->saylineedit_2->text().toLatin1().data(),ui->saylineedit_2->text().size();
    ui->roomtextedit2->append(ui->saylineedit->text());
    ui->roomtextedit1->append(ui->saylineedit_2->text());
    ui->saylineedit->clear();
    ui->saylineedit_2->clear();

}
