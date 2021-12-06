#include "patient.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
patient::patient()
{
    this->CODE_A_BARRE="";
    this->PRIX=0;
    this->TYPE="";
    this->NOMBRE=0;
    this->DATE_D_ACHAT = QDate();
}
patient::patient(QString CODE_A_BARRE ,int PRIX ,QString TYPE,int NOMBRE,QDate DATE_D_ACHAT)
{

    this->CODE_A_BARRE=CODE_A_BARRE;
    this->PRIX=PRIX;
    this->TYPE=TYPE;
    this->DATE_D_ACHAT=DATE_D_ACHAT;
    this->NOMBRE=NOMBRE;

}
bool patient::ajouter()
{
QSqlQuery query;
query.prepare("Insert into patient (CODE_A_BARRE,TYPE,PRIX,DATE_D_ACHAT,NOMBRE)"
              " Values(:CODE_A_BARRE,:PRIX,:TYPE,:DATE_D_ACHAT,:NOMBRE)");

query.bindValue(":CODE_A_BARRE",CODE_A_BARRE);
query.bindValue(":TYPE",TYPE);
query.bindValue(":PRIX",PRIX);
query.bindValue(":DATE_D_ACHAT",DATE_D_ACHAT);
query.bindValue(":NOMBRE",NOMBRE);
 return query.exec();
}
QSqlQueryModel * patient::afficher()
{
   QSqlQueryModel * model =new QSqlQueryModel();
   model->setQuery("select * from patient");
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("CODE_A_BARRE"));
   model->setHeaderData(2,Qt::Horizontal,QObject::tr("TYPE"));
   model->setHeaderData(1,Qt::Horizontal,QObject::tr("PRIX"));
   model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE_D_ACHAT"));
   model->setHeaderData(4,Qt::Horizontal,QObject::tr("NOMBRE"));





return model;
}
bool patient::supprimer(QString CODE_A_BARRE )
{

    QSqlQuery query;

    query.prepare("delete from patient where CODE_A_BARRE = :CODE_A_BARRE");
    query.bindValue(":CODE_A_BARRE",CODE_A_BARRE);
    return query.exec();

}
bool patient::update(QString CODE_A_BARRE ,int PRIX ,QString TYPE,int NOMBRE,QDate DATE_D_ACHAT)
{
    QSqlQuery query;
    query.prepare("UPDATE patient SET CODE_A_BARRE= :CODE_A_BARRE,PRIX= :PRIX,TYPE= :TYPE,NOMBRE=:NOMBRE,DATE_D_ACHAT=:DATE_D_ACHAT WHERE CODE_A_BARRE = :CODE_A_BARRE");

    query.bindValue(":CODE_A_BARRE",CODE_A_BARRE);
    query.bindValue(":TYPE",TYPE);
    query.bindValue(":PRIX",PRIX);
    query.bindValue(":DATE_D_ACHAT",DATE_D_ACHAT);
    query.bindValue(":NOMBRE",NOMBRE);
    return    query.exec();
}

QSqlQueryModel * patient::rechercher_patient(QString CODE_A_BARRE ,int PRIX ,QString TYPE,int NOMBRE,QDate DATE_D_ACHAT)
{
    QSqlQuery *query=new QSqlQuery();
    query->prepare("select * from patient where CODE_A_BARRE= :CODE_A_BARRE or PRIX= :PRIX or TYPE= :TYPE or NOMBRE=: NOMBRE or DATE_D_ACHAT=:DATE_D_ACHAT");
    query->bindValue(":CODE_A_BARRE",CODE_A_BARRE);
    query->bindValue(":TYPE",TYPE);
    query->bindValue(":PRIX",PRIX);
    query->bindValue(":DATE_D_ACHAT",DATE_D_ACHAT);
    query->bindValue(":NOMBRE",NOMBRE);
    query->exec();

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(*query);
    return model;
}



