#include "EQUIPEMENT.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include <QFileDialog>
#include <QCoreApplication>
#include <QTextStream>
#include <QTableView>

// test
EQUIPEMENT::EQUIPEMENT()
{
    this->CODE_A_BARRE="";
    this->PRIX=0;
    this->TYPE="";
    this->NOMBRE=0;
    this->DATE_D_ACHAT = QDate();
}
EQUIPEMENT::EQUIPEMENT(QString CODE_A_BARRE ,QString TYPE ,int PRIX,QDate DATE_D_ACHAT,int NOMBRE)
{

    this->CODE_A_BARRE=CODE_A_BARRE;
    this->PRIX=PRIX;
    this->TYPE=TYPE;
    this->DATE_D_ACHAT=DATE_D_ACHAT;
    this->NOMBRE=NOMBRE;
}
bool EQUIPEMENT::ajouter()
{
    QSqlQuery query;

    QString N_string =QString::number(NOMBRE) ;
    QString NPP =QString::number(PRIX) ;

query.prepare("INSERT INTO  EQUIPEMENT (CODE_A_BARRE, TYPE, PRIX, DATE_D_ACHAT,NOMBRE)"
              " VALUES(:CODE_A_BARRE ,:TYPE ,:PRIX ,:DATE_D_ACHAT ,:NOMBRE)");

query.bindValue(":CODE_A_BARRE",CODE_A_BARRE);
query.bindValue(":TYPE",TYPE);
query.bindValue(":PRIX",PRIX );
query.bindValue(":DATE_D_ACHAT",DATE_D_ACHAT);
query.bindValue(":NOMBRE",NOMBRE);

 return query.exec();
}
QSqlQueryModel * EQUIPEMENT::afficher()
{
   QSqlQueryModel * model =new QSqlQueryModel();
   model->setQuery("select * from EQUIPEMENT");
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("CODE_A_BARRE"));
   model->setHeaderData(1,Qt::Horizontal,QObject::tr("TYPE"));
   model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRIX"));
   model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE_D_ACHAT"));
   model->setHeaderData(4,Qt::Horizontal,QObject::tr("NOMBRE"));



return model;
}
bool EQUIPEMENT::supprimer(QString CODE_A_BARRE)
{
    QSqlQuery query;
    query.prepare("delete from EQUIPEMENT where CODE_A_BARRE = :CODE_A_BARRE");
    query.bindValue(":CODE_A_BARRE",CODE_A_BARRE);
    return query.exec();
}
bool EQUIPEMENT::update(QString CODE_A_BARRE ,QString TYPE ,int PRIX,QDate DATE_D_ACHAT,int NOMBRE)
{
   QSqlQuery query;
    query.prepare("UPDATE EQUIPEMENT SET CODE_A_BARRE= :CODE_A_BARRE,PRIX= :PRIX,TYPE= :TYPE,NOMBRE=:NOMBRE,DATE_D_ACHAT=:DATE_D_ACHAT WHERE CODE_A_BARRE = :CODE_A_BARRE");
    query.bindValue(":CODE_A_BARRE",CODE_A_BARRE);
    query.bindValue(":TYPE",TYPE);
    query.bindValue(":PRIX",PRIX);
    query.bindValue(":DATE_D_ACHAT",DATE_D_ACHAT);
    query.bindValue(":NOMBRE",NOMBRE);
    return    query.exec();
}

QSqlQueryModel * EQUIPEMENT::rechercher_EQUIPEMENT(QString CODE_A_BARRE ,QString TYPE, int PRIX )
{
    QSqlQuery *query=new QSqlQuery();
    query->prepare("select * from EQUIPEMENT where CODE_A_BARRE= :CODE_A_BARRE or PRIX=:PRIX or TYPE=:TYPE");
    query->bindValue(":CODE_A_BARRE",CODE_A_BARRE);
    query->bindValue(":PRIX",PRIX);
     query->bindValue(":TYPE",TYPE);
    query->exec();

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(*query);
    return model;
}

QSqlQueryModel *EQUIPEMENT::trier(QString crit)
{
    QSqlQuery *query=new QSqlQuery();
    QSqlQueryModel *model=new QSqlQueryModel();
    query->prepare("select * from EQUIPEMENT order by "+crit+"");
    query->exec();
    model->setQuery(*query);
    return model;
}
void EQUIPEMENT::exporter(QTableView *table)
{
    QString filters("CSV files (*.csv);;All files (*.*)");
    QString defaultFilter("CSV files (*.csv)");
    QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                                                        filters, &defaultFilter);
    QFile file(fileName);
    QAbstractItemModel *model =  table->model();
    if (file.open(QFile::WriteOnly | QFile::Truncate))
    {
        QTextStream data(&file);
        QStringList strList;
        for (int i = 0; i < model->columnCount(); i++)
        {
            if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
            else
                strList.append("");
         }
         data << strList.join(";") << "\n";
         for (int i = 0; i < model->rowCount(); i++)
         {
            strList.clear();
            for (int j = 0; j < model->columnCount(); j++)
            {

                if (model->data(model->index(i, j)).toString().length() > 0)
                    strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                else
                    strList.append("");
             }
                data << strList.join(";") + "\n";
            }
            file.close();
        }
}

QSqlQueryModel* EQUIPEMENT::historique()
{
    QSqlQuery *query=new QSqlQuery();
    QSqlQueryModel *model = new QSqlQueryModel();
    query->prepare("SELECT * FROM  EQUIPEMENT ORDER BY CODE_A_BARRE");
    query->exec();
    model->setQuery(*query);

    return model;
}
void EQUIPEMENT::stat(QCustomPlot *customPlot)
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
    fossil->setName("statistique des TYPE");
    fossil->setPen(QPen(QColor(111, 9, 176).lighter(170)));
    fossil->setBrush(QColor(111, 9, 176));

    QVector<double> ticks;
    QVector<QString> labels;
    query.prepare("SELECT COUNT(DISTINCT CODE_A_BARRE) FROM EQUIPEMENT where type between 1 and 2");
    query.exec();
    int un;
    while(query.next())
    {
        un=query.value(0).toInt();
        qDebug()<<un;
    }
    query.prepare("SELECT COUNT(DISTINCT CODE_A_BARRE) FROM EQUIPEMENT where type between 2 and 3");
    query.exec();
    int deux;
    while(query.next())
    {
        deux=query.value(0).toInt();
    }

    query.prepare("SELECT COUNT(DISTINCT CODE_A_BARRE) FROM EQUIPEMENT where type between 3 and 4");
    query.exec();
    int trois;
    while(query.next())
    {
        trois=query.value(0).toInt();
    }





    ticks << 1 << 2 << 3 ;
    labels << "[1,2]" << "[2,3]" << "[3,4]" ;
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
    customPlot->yAxis->setLabel("Nombre de EQUIPEMENT");
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
    regenData   << 0.06*10.5 << 0.05*5.5 << 0.04*5.5 << 0.06*5.8 << 0.02*5.2 << 0.07*4.2<< 0.25*11.2;
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
