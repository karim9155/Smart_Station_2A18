#include "bus.h"
#include <QString>
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QTableView>
#include <QObject>
#include "qcustomplot.h"
Bus::Bus()
{
  marque = " "; type = " ";
  matricule = 0; puissance = 0;
}
Bus::Bus(QString marque,QString type,int matricule,int puissance)
{
 this->marque=marque; this->type=type; this->matricule=matricule; this->puissance=puissance;
}
int Bus::getmatricule(){return matricule;}
int Bus::getpuissance(){return puissance;}
QString Bus::getmarque(){return marque;}
QString Bus::gettype(){return type;}
void Bus::setmatricule(int matricule){this->matricule=matricule;}
void Bus::setpuissance(int puissance){this->puissance=puissance;}
void Bus::setmarque(QString marque){this->marque=marque;}
void Bus::settype(QString type){this->type=type;}
bool Bus::ajouter()
{
    QSqlQuery query;
QString matricule_string= QString::number(matricule);
QString puissance_string= QString::number(puissance);
         query.prepare("INSERT INTO BUS (MARQUE, TYPE, MATRICULE, PUISSANCE) "
                       "VALUES (:marque, :type, :matricule, :puissance)");
         query.bindValue(":marque", marque);
         query.bindValue(":type", type);
         query.bindValue(":matricule", matricule);
         query.bindValue(":puissance", puissance);
         return query.exec();


}
bool Bus::supprimer(int matricule)
{
    QSqlQuery query;
QString matricule_string= QString::number(matricule);
QString puissance_string= QString::number(puissance);

         query.prepare(" Delete from BUS where matricule =:matricule");
         query.bindValue(0, matricule);

         return query.exec();

}
QSqlQueryModel* Bus::afficher()
{
   QSqlQueryModel* model=new QSqlQueryModel();
         model->setQuery("SELECT* FROM BUS");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("marque"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("matricule"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("puissance"));
         return model;
}


bool Bus :: modifier(int matricule)
{
     QSqlQuery query;



        QString res= QString::number(matricule);
        query.prepare("UPDATE BUS SET marque=:marque,type=:type,matricule=:matricule ,puissance=:puissance WHERE matricule=:matricule");
        query.bindValue(":matricule", matricule);
        query.bindValue(":marque", marque);
        query.bindValue(":type", type);
        query.bindValue(":puissance", puissance);



           return    query.exec();

}
QStringList Bus::lister(){
QSqlQuery c;
c.prepare("select matricule from BUS");
c.exec();
QStringList l;
while(c.next()){
l<<c.value(0).toString();
}
return l;
}
QSqlQueryModel * Bus::triermarque()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM BUS ORDER BY MARQUE");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("MARQUE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("TYPE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("MATRICULE"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("PUISSANCE"));
    return model;
}
QSqlQueryModel * Bus::trierpuissance()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM BUS ORDER BY PUISSANCE");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("MARQUE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("TYPE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("MATRICULE"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("PUISSANCE"));
    return model;
}
QSqlQueryModel * Bus::triermatricule()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM BUS ORDER BY MATRICULE");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("MARQUE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("TYPE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("MATRICULE"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("PUISSANCE"));
    return model;
}
void Bus :: recherche(QTableView * table ,QString marque,int matricule, int puissance )
{
    QSqlQueryModel *model= new QSqlQueryModel();

    QString matricule_string=QString::number(matricule);
      QString puissance_string=QString::number(puissance);



    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from BUS where MARQUE like '%"+marque+"%' or MATRICULE like '%"+matricule_string+"%' or PUISSANCE like '%"+puissance_string+"%' ;");


    query->exec();
    model->setQuery(*query);
    table->setModel(model);
   // table->show();

}
void Bus::stat(QCustomPlot *customPlot)
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
    fossil->setName("puissance");
    fossil->setPen(QPen(QColor(111, 9, 176).lighter(170)));
    fossil->setBrush(QColor(111, 9, 176));

    QVector<double> ticks;
    QVector<QString> labels;
    query.prepare("SELECT COUNT(DISTINCT matricule) FROM BUS where puissance between 80 and 120");
    query.exec();
    int un;
    while(query.next())
    {
        un=query.value(0).toInt();
        qDebug()<<un;
    }
    query.prepare("SELECT COUNT(DISTINCT matricule) FROM BUS where puissance between 120 and 190");
    query.exec();
    int deux;
    while(query.next())
    {
        deux=query.value(0).toInt();
    }

    query.prepare("SELECT COUNT(DISTINCT matricule) FROM BUS where puissance between 190 and 400");
    query.exec();
    int trois;
    while(query.next())
    {
        trois=query.value(0).toInt();
    }





    ticks << 1 << 2 << 3 ;
    labels << "[80,120]" << "[120,200]" << "[200,400]" ;
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
    customPlot->yAxis->setLabel("Nombre de BUS");
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
