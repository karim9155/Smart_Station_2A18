#ifndef REPARATION_H
#define REPARATION_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
class reparation
{
public:
    reparation();
    reparation(int,QString,float,QString);
    bool ajouter();
    bool supprimer(int ref);
    bool modifier(int ref);
    QSqlQueryModel* afficher();

private:
    int ref;
    QString etat;
    float prix;
    QString date_rep;

};

#endif // REPARATION_H
