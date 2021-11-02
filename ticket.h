#ifndef TICKET_H
#define TICKET_H

#include <QSqlQuery>
#include <QSqlQueryModel>

class ticket
{
public:
    ticket();
    ticket (QString,QString,QString,QString,QString,double);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);



    QString code,depart,arrive,type,date;
    double prix;
};

#endif // TICKET_H
