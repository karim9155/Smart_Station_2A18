#include "bus.h"
#include <QString>
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

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
