#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QFileDialog>
#include <QPrinter>
#include <QTextDocument>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QPrintDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableRep->setModel(rep.afficher());
    rep.stat(series);
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Statistiques");
        chart->setBackgroundBrush(Qt::transparent);
        QChartView *chartview = new QChartView(chart);
        chartview->setRenderHint(QPainter::Antialiasing);
        chartview->setParent(ui->horizontalFrame);
        chartview->resize(600,400);
        chart->setAnimationOptions(QChart::AllAnimations);
        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignRight);
        series->setLabelsVisible(true);
        QIntValidator *validator=new QIntValidator(100000,999999,this);
        ui->ref->setValidator(validator);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int ref=ui->ref->text().toInt();
    QString etat=ui->comboBoxEtat->currentText();
    float prix=ui->prix->text().toFloat();
    QString date_rep=ui->dateEdit->text();
    reparation r(ref,etat,prix,date_rep);
    if(prix>0)
   { bool test=r.ajouter();
    if (test)
    {
        QMessageBox::information(nullptr, QObject::tr("reparation ajouté"),
                    QObject::tr("successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->tableRep->setModel(rep.afficher());
    rep.stat(series);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("reparation non ajouté"),
                    QObject::tr("erreur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }}
    else{
        QMessageBox::critical(nullptr, QObject::tr("verifiez le prix"),
                    QObject::tr("erreur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    int ref=ui->ref->text().toInt();
    QString etat=ui->comboBoxEtat->currentText();
    float prix=ui->prix->text().toFloat();
    QString date_rep=ui->dateEdit->text();
    reparation r(ref,etat,prix,date_rep);

    if(prix>0)
   { bool test=r.modifier(ref);
    if (test)
    {
        QMessageBox::information(nullptr, QObject::tr("reparation modifié"),
                    QObject::tr("successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->tableRep->setModel(rep.afficher());
    rep.stat(series);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("reparation non modifié"),
                    QObject::tr("erreur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }}
    else{
        QMessageBox::critical(nullptr, QObject::tr("verifiez le prix"),
                    QObject::tr("erreur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_pushButton_3_clicked()
{


}

void MainWindow::on_pushButton_4_clicked()
{
 ui->tableRep->setModel(rep.afficherRech(ui->comboBoxRech->currentText(),ui->Rech->text()));
}

void MainWindow::on_pushButton_5_clicked()
{
     ui->tableRep->setModel(rep.afficherTri(ui->comboBoxTri->currentText()));
}

void MainWindow::on_pushButton_6_clicked()
{

    QString strStream;
                QTextStream out(&strStream);

                const int rowCount = ui->tableRep->model()->rowCount();
                const int columnCount = ui->tableRep->model()->columnCount();
                QString TT = QDate::currentDate().toString("yyyy/MM/dd");
                out <<"<html>\n"
                      "<head>\n"
                       "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                    << "<title> LISTE DES FORMATIONS<title>\n "
                    << "</head>\n"
                    "<body bgcolor=#ffffff link=#5000A0>\n"
                    "<h1 style=\"text-align: center;\"><strong> **LISTE DES FORRMATIONS ** "+TT+"</strong></h1>"
                    "<table style=\"text-align: center; font-size: 20px;\" border=1>\n "
                      "</br> </br>";
                // headers
                out << "<thead><tr bgcolor=#d6e5ff>";
                for (int column = 0; column < columnCount; column++)
                    if (!ui->tableRep->isColumnHidden(column))
                        out << QString("<th>%1</th>").arg(ui->tableRep->model()->headerData(column, Qt::Horizontal).toString());
                out << "</tr></thead>\n";

                // data table
                for (int row = 0; row < rowCount; row++) {
                    out << "<tr>";
                    for (int column = 0; column < columnCount; column++) {
                        if (!ui->tableRep->isColumnHidden(column)) {
                            QString data =ui->tableRep->model()->data(ui->tableRep->model()->index(row, column)).toString().simplified();
                            out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                        }
                    }
                    out << "</tr>\n";
                }
                out <<  "</table>\n"
                    "</body>\n"
                    "</html>\n";

                QTextDocument *document = new QTextDocument();
                document->setHtml(strStream);

                QPrinter printer;

                QPrintDialog *test = new QPrintDialog(&printer, NULL);
                if (test->exec() == QDialog::Accepted) {
                    document->print(&printer);
                }

                delete document;

 }

void MainWindow::on_pushButton_7_clicked()
{
    int row=ui->tableRep->selectionModel()->currentIndex().row();
    int ref=ui->tableRep->model()->index(row,0).data().toInt();
    bool test=rep.supprimer(ref);
    if (test){
    ui->tableRep->setModel(rep.afficher());
     rep.stat(series);
     QMessageBox::information(nullptr, QObject::tr("reparation supprimé"),
                 QObject::tr("successful.\n"
                             "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("reparation non supprimé"),
                    QObject::tr("erreur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
