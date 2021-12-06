#include "clients.h"
#include<QSqlQuery>
#include<QtDebug>
#include <QString>
#include <QObject>
#include <QSqlQueryModel>
#include  <QTextCursor>


clients::clients()
{
id=0;
prenom="";
nom="";
numero=0;
age=0;
}

clients::clients (QString nom, QString prenom,int age,int id,int numero)
{
  this->id=id; this->nom=nom;this->prenom=prenom; this->age=age; this->numero=numero;

}
   int clients ::getid(){
       return id;
   }


   int clients ::getnumero(){
       return numero;
   }

   int clients ::getage(){
       return age;
   }


   QString clients::getnom(){
       return nom;
   }

   QString clients ::getprenom(){
       return prenom;
   }

  void clients :: setage(int age){
   this->age=age;
  }

  void clients :: setnumero(int numero){
   this->numero=numero;
  }


  void clients ::  setid(int id){
   this->id=id;
  }

   void clients::  setnom(QString nom){
       this->nom=nom;
   }

       void clients:: setprenom(QString prenom){
          this->prenom=prenom;
       }
/***************************************************************************/
       bool clients::ajouter(){


         QSqlQuery query;
         QString id_string=QString::number(id);


               query.prepare("INSERT INTO clients(nom, prenom, age,id,numero) "
                             "VALUES (:nom, :prenom, :age,:id,:numero)");

               query.bindValue(":nom", nom);
               query.bindValue(":prenom", prenom);
               query.bindValue(":age", age);
               query.bindValue(":id", id_string);
               query.bindValue(":numero", numero);




              return  query.exec();
       }

/***********************************************************/
       QSqlQueryModel* clients::afficher(){

        QSqlQueryModel* model=new QSqlQueryModel();


              model->setQuery("SELECT* FROM  clients");
              model->setHeaderData(0, Qt::Horizontal,QObject:: tr("nom"));
              model->setHeaderData(1, Qt::Horizontal,QObject:: tr("prenom"));
              model->setHeaderData(2, Qt::Horizontal,QObject:: tr("age"));
              model->setHeaderData(3, Qt::Horizontal,QObject:: tr("id"));
              model->setHeaderData(4, Qt::Horizontal,QObject:: tr("numero"));

       return model;
       }
       /*************************************/
       bool clients::supprimer(int id){

        QSqlQuery query;
        QString res=QString::number(id);

        query.prepare("delete from clients where id= :id");
        query.bindValue(":id",res);

        return query.exec();

       }
/***************************************************************************/
      bool clients :: modifier(int id)
       {
            QSqlQuery query;

              QString res= QString::number(id);

               query.prepare("UPDATE clients SET  nom=:nom,prenom=:prenom,age=:age,id=:id,numero=:numero WHERE id=:id");
               query.bindValue(":nom", nom);
               query.bindValue(":prenom",prenom);
               query.bindValue(":age", age);
               query.bindValue(":numero",numero);
               query.bindValue(":id", id);

                  return    query.exec();

       }

     /*************************************************************/
      QStringList clients::lister(){
      QSqlQuery q;
      q.prepare("select id from clients");
      q.exec();
      QStringList l;
      while(q.next()){
      l<<q.value(0).toString();
      }
      return l;
      }

/****************************************************************************************/
      QSqlQueryModel * clients ::trierage ()
      {
          QSqlQueryModel * model= new  QSqlQueryModel ();
      model-> setQuery ( " SELECT * FROM clients ORDER BY age " );
      model-> setHeaderData ( 0 , Qt::Horizontal,QObject :: tr ( " nom " ));
      model-> setHeaderData ( 1 , Qt::Horizontal, QObject :: tr ( " prenom " ));
      model-> setHeaderData ( 3 , Qt::Horizontal, QObject :: tr ( " age " ));
      model-> setHeaderData ( 2 , Qt::Horizontal, QObject :: tr ( " numero " ));
      model-> setHeaderData ( 4 , Qt::Horizontal, QObject :: tr ( " id" ));
         return model  ;
      }

      /**************************************************************************************/
      QSqlQueryModel * clients ::trieralpha ()
      {
          QSqlQueryModel * model= new  QSqlQueryModel ();

      model-> setQuery ( " SELECT * FROM clients ORDER BY nom " );
      model-> setHeaderData ( 0 , Qt::Horizontal,QObject :: tr ( " nom " ));
      model-> setHeaderData ( 1 , Qt::Horizontal, QObject :: tr ( " prenom " ));
      model-> setHeaderData ( 3 , Qt::Horizontal, QObject :: tr ( " age" ));
      model-> setHeaderData ( 2 , Qt::Horizontal, QObject :: tr ( " numero " ));
      model-> setHeaderData ( 4 , Qt::Horizontal, QObject :: tr ( " id" ));
         return model ;
      }

      /***************************************************************************************/
      QSqlQueryModel * clients:: rechercher(int id)   //OK
      {

          QSqlQueryModel *model=new QSqlQueryModel();
          QSqlQuery query;

          QString id_string=QString::number(id);


          query.prepare("Select * from clients where id=:id");
          query.bindValue(":id",id_string);
          query.exec();
          model->setQuery(query);
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
          return model;

      }


      void clients::stat(QCustomPlot *customPlot)
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
          query.prepare("SELECT COUNT(DISTINCT id) FROM clients where age between 20 and 30");
          query.exec();
          int un;
          while(query.next())
          {
              un=query.value(0).toInt();
              qDebug()<<un;
          }
          query.prepare("SELECT COUNT(DISTINCT id) FROM clients where age between 31 and 45");
          query.exec();
          int deux;
          while(query.next())
          {
              deux=query.value(0).toInt();
          }

          query.prepare("SELECT COUNT(DISTINCT id) FROM clients where age between 46 and 60");
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
