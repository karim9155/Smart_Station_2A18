#include "employe.h"
#include <QString>
#include <QSqlQuery>
#include <QtDebug>
#include<QObject>
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
        model->setHeaderData(3, Qt::Horizontal,QObject :: tr("Identifiant"));
        model->setHeaderData(0, Qt::Horizontal, QObject :: tr("Nom"));
        model->setHeaderData(2, Qt::Horizontal, QObject :: tr("tel"));
         model->setHeaderData(4, Qt::Horizontal, QObject :: tr("age"));
        model->setHeaderData(1, Qt::Horizontal, QObject :: tr("Email"));

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
    model->setHeaderData(3, Qt::Horizontal,QObject :: tr("IDENTIFIANT"));
    model->setHeaderData(0, Qt::Horizontal, QObject :: tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject :: tr("TEL"));
     model->setHeaderData(4, Qt::Horizontal, QObject :: tr("AGE"));
    model->setHeaderData(1, Qt::Horizontal, QObject :: tr("EMAIL"));
    return model;
}
QSqlQueryModel * employe::trieralpha()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM EMPLOYE ORDER BY NOM");
    model->setHeaderData(3, Qt::Horizontal,QObject :: tr("IDENTIFIANT"));
    model->setHeaderData(0, Qt::Horizontal, QObject :: tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject :: tr("TEL"));
     model->setHeaderData(4, Qt::Horizontal, QObject :: tr("AGE"));
    model->setHeaderData(1, Qt::Horizontal, QObject :: tr("EMAIL"));
    return model;
}



