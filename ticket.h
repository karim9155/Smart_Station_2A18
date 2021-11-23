#ifndef TICKET_H
#define TICKET_H

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>
class ticket
{
public:
    ticket();
    ticket (QString,QString,QString,QString,QString,int);

    bool ajouter();
    bool modifier(QString);
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    QSqlQueryModel *recherche(QString);

    QSqlQueryModel *afficherTri(int);
    QSqlQueryModel *afficherTriDesc(int);


    QString code,depart,arrive,type,date;
    int prix;
};

#endif // TICKET_H
