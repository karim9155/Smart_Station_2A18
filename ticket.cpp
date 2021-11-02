#include "ticket.h"

ticket::ticket()
{

}

ticket::ticket(QString s1,QString s2,QString s3,QString s4,QString s5, double x){

    code=s1;
    depart=s2;
    arrive=s3;
    type=s4;
    date=s5;
    prix=x;

}


bool ticket::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO tickets (code,depart,arrive,TYPE,t_date,prix) VALUES (:code,:depart,:arrive,:type,:date,:prix)");

    query.bindValue(":code", code);
    query.bindValue(":depart",depart);
    query.bindValue(":arrive",arrive);
    query.bindValue(":type",type);
    query.bindValue(":date",date);
    query.bindValue(":prix",prix);

    return    query.exec();

}

bool ticket::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE tickets SET  TYPE=:type, depart=:depart, arrive=:arrive, prix=:prix, t_date=:date"
                  " where code= :code");
    query.bindValue(":code", selected);
    query.bindValue(":depart",depart);
    query.bindValue(":arrive",arrive);
    query.bindValue(":type",type);
    query.bindValue(":date",date);
    query.bindValue(":prix",prix);


    return    query.exec();

}

 QSqlQueryModel * ticket::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM tickets");

     return modal;

 }
  bool ticket::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from tickets where code = :code ");
      query.bindValue(":code", selected);
      return    query.exec();


  }
