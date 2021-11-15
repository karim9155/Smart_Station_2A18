#include "employe.h"
#include <QString>
#include <QSqlQuery>
#include <QtDebug>
#include<QObject>
#include <QTableView>
#include <QPrinter>
#include <QTextCursor>

employe::employe()
{
    Id=0;

    Nom="" ;
    Email = "" ;
    Tel = 0 ;
    age=0;

}

employe::employe (int Id,QString Nom,QString Email,int Tel,int age)
{
this->Id=Id ;
  this->Nom=Nom ;

    this->Email=Email ;
    this->Tel=Tel ;
    this->age=age ;
}
int employe :: get_id()
{
    return Id ;
}
int  employe :: get_tel()
{
    return Tel ;
}
int  employe :: get_age()
{
    return age ;
}
QString  employe :: get_nom()
{ return Nom ;
}


QString  employe :: get_email()
{
    return Email ;
}
void  employe :: set_id(int x)
{
   Id = x ;

}
void  employe :: set_age(int x)
{
   age = x ;

}
void  employe :: set_tel(int x)
{
    Tel = x ;
}


void  employe :: set_nom(QString ch)
{
    Nom = ch ;
}
void  employe :: set_email(QString ch)
{

    Email = ch ;

}
bool  employe ::  ajouter()
{

QSqlQuery query;
QString id_string =QString::number(Id) ;

query.prepare("INSERT INTO  employe (Id, Nom, Email,Tel,age) " " VALUES (:Id, :forename, :Email , :Tel,:age)");
query.bindValue(":Id", id_string);
query.bindValue(":forename", Nom);
query.bindValue(":Email", Email);
query.bindValue(":Tel", Tel);
query.bindValue(":age", age);

return query.exec() ;

}

QSqlQueryModel *  employe :: afficher()
{
    QSqlQueryModel *  model = new QSqlQueryModel ()    ;
        model->setQuery("select * from  employe order by id");
        model->setHeaderData(0, Qt::Horizontal,QObject :: tr("Identifiant"));
        model->setHeaderData(1, Qt::Horizontal, QObject :: tr("Nom"));
        model->setHeaderData(3, Qt::Horizontal, QObject :: tr("tel"));
         model->setHeaderData(2, Qt::Horizontal, QObject :: tr("age"));
        model->setHeaderData(4, Qt::Horizontal, QObject :: tr("Email"));

return model ;
}
bool  employe :: supprimer(int)
{
    QSqlQuery query;

    query.prepare("Delete from  employe where Id=:Id ") ;
    query.bindValue(":Id",Id);



    return query.exec() ;


}

bool  employe :: chercherParCin()
{

    QSqlQuery query;
    query.prepare("Select * from  employe where Id=:Id");
    query.bindValue(":Id",Id);
    query.exec();

    if (query.next())
    {
        Id=(query.value(0).toInt());
       /*Nom=(query.value(1).toString());
       Email=(query.value(2).toString());
       Tel=(query.value(3).toInt());
age=(query.value(4).toInt());*/

    }
    return query.exec();

}


int  employe ::verificationID()
{
  QSqlQuery query;

  query.prepare("select * from  employe where Id=:Id");
  query.bindValue(":Id",this->Id);
  query.exec();

  int count_user = 0;
  while (query.next())
  {
      Id=(query.value(0).toInt());
      Nom=(query.value(1).toString());
      Email=(query.value(2).toString());
      Tel=(query.value(3).toInt());
      age=(query.value(4).toInt());
      count_user++;
  }
  if (count_user==1)
  {
      return 0;
  }
  else if(count_user > 1)
  {
      return 1;
  }
  else
  {
      return 2;
  }
}



bool  employe :: modifier(int id)
{
     QSqlQuery query;

       // QString res= QString::number(identifiant);

        QString res= QString::number(id);
        query.prepare("UPDATE  employe SET  Nom=:Nom,Email=:Email,Tel=:Tel,age=:age WHERE Id=:Id");
        query.bindValue(":Id", Id);
        query.bindValue(":Nom", Nom);
        query.bindValue(":Email", Email);
        query.bindValue(":Tel", Tel);
        query.bindValue(":age", age);



           return    query.exec();

}
QStringList employe::lister(){
QSqlQuery q;
q.prepare("select id from employe");
q.exec();
QStringList l;
while(q.next()){
l<<q.value(0).toString();
}
return l;
}
QSqlQueryModel * employe::trierage()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM EMPLOYE ORDER BY AGE");
    model->setHeaderData(0, Qt::Horizontal,QObject :: tr("IDENTIFIANT"));
    model->setHeaderData(1, Qt::Horizontal, QObject :: tr("NOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject :: tr("TEL"));
     model->setHeaderData(2, Qt::Horizontal, QObject :: tr("AGE"));
    model->setHeaderData(4, Qt::Horizontal, QObject :: tr("EMAIL"));
    return model;
}
QSqlQueryModel * employe::trieralpha()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM EMPLOYE ORDER BY NOM");
    model->setHeaderData(0, Qt::Horizontal,QObject :: tr("IDENTIFIANT"));
    model->setHeaderData(1, Qt::Horizontal, QObject :: tr("NOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject :: tr("TEL"));
     model->setHeaderData(2, Qt::Horizontal, QObject :: tr("AGE"));
    model->setHeaderData(4, Qt::Horizontal, QObject :: tr("EMAIL"));
    return model;
}
void employe :: recherche(QTableView * table ,QString nom,int id, int age )
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QString id_string=QString::number(id);
    QString age_string=QString::number(age);



    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from EMPLOYE where NOM like '%"+nom+"%' or ID like '%"+id_string+"%' or AGE like '%"+age_string+"%' ;");


    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();

}
void pdf(QString filename)
{
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(filename);
    printer.setPageMargins(QMarginsF(30, 30, 30, 30));

    QFont headerFont("Times New Roman", 8);
    QFont titleFont("Times New Roman", 14, QFont::Bold);

    QTextCharFormat txtformat = QTextCharFormat();


    QTextDocument doc;
    doc.setPageSize(printer.pageRect().size());

    QTextCursor* cursor = new QTextCursor(&doc);

    txtformat.setFont(headerFont);
    cursor->insertText("Company XYZ", txtformat);


    doc.print(&printer);
}
void employe::stat(QCustomPlot *customPlot)
{
    QSqlQuery query,query1;
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(90, 90, 90));
    gradient.setColorAt(0.38, QColor(105, 105, 105));
    gradient.setColorAt(1, QColor(70, 70, 70));
    customPlot->clearPlottables();
    customPlot->clearGraphs();
    customPlot->replot();

    customPlot->setBackground(QBrush(gradient));


    QCPBars *fossil = new QCPBars(customPlot->xAxis, customPlot->yAxis);

    fossil->setAntialiased(false);

    fossil->setStackingGap(1);
    // set names and colors:
    fossil->setName("statistique des ages");
    fossil->setPen(QPen(QColor(111, 9, 176).lighter(170)));
    fossil->setBrush(QColor(111, 9, 176));

    QVector<double> ticks;
    QVector<QString> labels;
    query.prepare("SELECT COUNT(DISTINCT id) FROM EMPLOYE where age between 20 and 30");
    query.exec();
    int un;
    while(query.next())
    {
        un=query.value(0).toInt();
        qDebug()<<un;
    }
    query.prepare("SELECT COUNT(DISTINCT id) FROM EMPLOYE where age between 31 and 45");
    query.exec();
    int deux;
    while(query.next())
    {
        deux=query.value(0).toInt();
    }

    query.prepare("SELECT COUNT(DISTINCT id) FROM EMPLOYE where capacite between 46 and 60");
    query.exec();
    int trois;
    while(query.next())
    {
        trois=query.value(0).toInt();
    }





    ticks << 1 << 2 << 3 ;
    labels << "[20,30]" << "[31,45]" << "[46,60]" ;
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    customPlot->xAxis->setTicker(textTicker);
    customPlot->xAxis->setTickLabelRotation(60);
    customPlot->xAxis->setSubTicks(false);
    customPlot->xAxis->setTickLength(0, 4);
    customPlot->xAxis->setRange(0, 8);
    customPlot->xAxis->setBasePen(QPen(Qt::white));
    customPlot->xAxis->setTickPen(QPen(Qt::white));
    customPlot->xAxis->grid()->setVisible(true);
    customPlot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    customPlot->xAxis->setTickLabelColor(Qt::white);
    customPlot->xAxis->setLabelColor(Qt::green);

    // prepare y axis:
    customPlot->yAxis->setRange(0, 20);
    customPlot->yAxis->setPadding(5); // a bit more space to the left border
    customPlot->yAxis->setLabel("Nombre de EMPLOYE");
    customPlot->yAxis->setBasePen(QPen(Qt::white));
    customPlot->yAxis->setTickPen(QPen(Qt::white));
    customPlot->yAxis->setSubTickPen(QPen(Qt::white));
    customPlot->yAxis->grid()->setSubGridVisible(true);
    customPlot->yAxis->setTickLabelColor(Qt::white);
    customPlot->yAxis->setLabelColor(Qt::white);
    customPlot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
    customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

    // Add data:
    QVector<double> fossilData, nuclearData, regenData;
    fossilData  << un << deux << trois;
   // nuclearData << 0.08*10.5 << 0.12*5.5 << 0.12*5.5 << 0.40*5.8 << 0.09*5.2 << 0.00*4.2 << 0.07*11.2;
    regenData   << 0.06*10.5 << 0.05*5.5 << 0.04*5.5 << 0.06*5.8 << 0.02*5.2 << 0.07*4.2 << 0.25*11.2;
    fossil->setData(ticks, fossilData);
  //  nuclear->setData(ticks, nuclearData);
 //   regen->setData(ticks, regenData);

    // setup legend:
    customPlot->legend->setVisible(true);
    customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    customPlot->legend->setBrush(QColor(255, 255, 255, 100));
    customPlot->legend->setBorderPen(Qt::NoPen);
    QFont legendFont = QFont();
    legendFont.setPointSize(10);
    customPlot->legend->setFont(legendFont);
    customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

}
