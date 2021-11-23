#include "ticket.h"

ticket::ticket()
{

}

ticket::ticket(QString s1,QString s2,QString s3,QString s4,QString s5, int x){

     code=s1;
    depart=s2;
    arrive=s3;
    type=s4;
    date=s5;
    prix=x;

}


bool ticket::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO ticket (code,depart,arrive,TYPE,t_date,prix) VALUES (:code,:depart,:arrive,:type,:date,:prix)");

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


    query.prepare(" UPDATE ticket SET  TYPE=:type, depart=:depart, arrive=:arrive, prix=:prix, t_date=:date"
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
     modal->setQuery("SELECT * FROM ticket order by code asc");

     return modal;

 }
  bool ticket::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from ticket where code = :code ");
      query.bindValue(":code", selected);
      return    query.exec();


  }

  QSqlQueryModel * ticket::recherche(QString res)
  {
      QSqlQueryModel *model=new QSqlQueryModel();
      model->setQuery("SELECT* FROM ticket where code like'"+res+"%' or type like'"+res+"%' or depart like'"+res+"%' or arrive like'"+res+"%' or prix like'"+res+"%'");
      return model;
  }
  QSqlQueryModel * ticket::afficherTri(int x){

      QSqlQueryModel * modal=new QSqlQueryModel();
      switch(x){
      case 0 :
          modal->setQuery("SELECT * FROM ticket order by code asc");
      break;
      case 1:
          modal->setQuery("SELECT * FROM ticket order by type asc");
      break;
      case 2:
          modal->setQuery("SELECT * FROM ticket order by depart asc");
      break;
      case 3 :
          modal->setQuery("SELECT * FROM ticket order by arrive asc");
        break;
       case 4 :
          modal->setQuery("SELECT * FROM ticket order by prix asc");
        break;
      }


      return modal;

  }
  QSqlQueryModel * ticket::afficherTriDesc(int x){

      QSqlQueryModel * modal=new QSqlQueryModel();
      switch(x){
      case 0 :
          modal->setQuery("SELECT * FROM ticket order by code desc");
      break;
      case 1:
          modal->setQuery("SELECT * FROM ticket order by type desc");
      break;
      case 2:
          modal->setQuery("SELECT * FROM ticket order by depart desc");
      break;
      case 3 :
          modal->setQuery("SELECT * FROM ticket order by arrive desc");
        break;
       case 4 :
          modal->setQuery("SELECT * FROM ticket order by prix desc");
        break;
      }


      return modal;

  }
