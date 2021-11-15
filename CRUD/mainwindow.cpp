   #include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employe.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QFileDialog>
#include <QTableView>
#include <QPrinter>
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
    int age =ui->lineEdit_age->text().toInt() ;

    employe C(Id,Nom,Email,Tel,age) ;
  bool test=C.ajouter();

  if(test)
  {
      QMessageBox::information(nullptr, QObject::tr("Ok"),
           QObject::tr("Ajout effectué.\n"
                       "Click Cancel to exit."), QMessageBox::Cancel);

      ui->Tab_employe->setModel(C.afficher());
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
     int age = ui->lineEdit_age_md->text().toInt();

     employe c(Id, Nom, Mail, Tel,age);
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
                ui->lineEdit_age_md->clear();
  }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("non effectué"),
                    QObject::tr("non modifié !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

        ui->lineEdit_Nom_md->clear();
        ui->lineEdit_Tel_md->clear();
        ui->lineEdit_Email_md->clear();
        ui->lineEdit_age_md->clear();



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

void MainWindow::on_triage_clicked()
{
    ui->Tab_employe->setModel(C.trierage());
}

void MainWindow::on_trialphabetique_clicked()
{
   ui->Tab_employe->setModel(C.trieralpha());
}






void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    employe em;


    QString nom = ui->lineEdit->text();
    int age = ui->lineEdit->text().toInt();
    int id= ui->lineEdit->text().toInt();
    em.recherche(ui->Tab_employe,nom,id,age);
    if (ui->lineEdit->text().isEmpty())
    {
        ui->Tab_employe->setModel(em.afficher());
    }
}


void MainWindow::on_pushButton_8__clicked()
{

        QString strStream;
                              QTextStream out(&strStream);

                               const int rowCount = ui->Tab_employe->model()->rowCount();
                               const int columnCount = ui->Tab_employe->model()->columnCount();
                              out <<  "<html>\n"
                              "<head>\n"
                                               "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                                               <<  QString("<title>%1</title>\n").arg("strTitle")
                                               <<  "</head>\n"
                                               "<body bgcolor=#ffffff link=#5000A0>\n"

                                              //     "<align='right'> " << datefich << "</align>"
                                               "<center> <H1>Liste des Employes</H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                                           // headers
                                           out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                                           out<<"<cellspacing=10 cellpadding=3>";
                                           for (int column = 0; column < columnCount; column++)
                                               if (!ui->Tab_employe->isColumnHidden(column))
                                                   out << QString("<th>%1</th>").arg(ui->Tab_employe->model()->headerData(column, Qt::Horizontal).toString());
                                           out << "</tr></thead>\n";

                                           // data table
                                           for (int row = 0; row < rowCount; row++) {
                                               out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                                               for (int column = 0; column < columnCount; column++) {
                                                   if (!ui->Tab_employe->isColumnHidden(column)) {
                                                       QString data = ui->Tab_employe->model()->data(ui->Tab_employe->model()->index(row, column)).toString().simplified();
                                                       out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                                   }
                                               }
                                               out << "</tr>\n";
                                           }
                                           out <<  "</table> </center>\n"
                                               "</body>\n"
                                               "</html>\n";

                                     QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                                       if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                                      QPrinter printer (QPrinter::PrinterResolution);
                                       printer.setOutputFormat(QPrinter::PdfFormat);
                                      printer.setPaperSize(QPrinter::A4);
                                     printer.setOutputFileName(fileName);

                                      QTextDocument doc;
                                       doc.setHtml(strStream);
                                       doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                                       doc.print(&printer);
    }



void MainWindow::on_stat_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
    employe E;


    E.stat(ui->widget);
}
