#ifndef BUS_H
#define BUS_H
#include <QString>
#include <QSqlQueryModel>
#include <QTableView>
#include <QObject>
#include "qcustomplot.h"

class Bus
{
public:
    Bus();
    Bus(QString,QString,int,int);
    int getmatricule();
    int getpuissance();
    QString getmarque();
    QString gettype();
    void setmatricule(int);
    void setpuissance(int);
    void setmarque(QString);
    void settype(QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier(int matricule);
    QStringList lister();
    QSqlQueryModel * triermarque();
    QSqlQueryModel * trierpuissance();
    void recherche(QTableView * tabl, QString,int,int);
    void stat(QCustomPlot *customPlot);
private:
    QString marque,type;
    int matricule;
    int puissance;
};

#endif // BUS_H
