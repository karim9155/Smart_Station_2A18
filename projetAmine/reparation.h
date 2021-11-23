#ifndef REPARATION_H
#define REPARATION_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
class reparation
{
public:
    reparation();
    reparation(int,QString,float,QString);
    bool ajouter();
    bool supprimer(int ref);
    bool modifier(int ref);
    QSqlQueryModel* afficher();
    QSqlQueryModel* afficherRech(QString,QString);
    QSqlQueryModel* afficherTri(QString);
    void stat(QPieSeries*);
    bool rechercher(int);


private:

    int ref;
    QString etat;
    float prix;
    QString date_rep;

};

#endif // REPARATION_H
