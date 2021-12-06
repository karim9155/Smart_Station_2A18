#ifndef clients_H
#define clients_H

#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <qcustomplot.h>
#include <QTableView>



class clients
{
public:
    clients();
    clients(QString,QString,int,int,int);
        int getid();
        int getnumero();
        int getage();
        QString getnom();
        QString getprenom();
        void setid(int);
        void setnom(QString);
        void setprenom(QString);
        void setage(int);
        void setnumero(int);
        bool ajouter();
        QSqlQueryModel * afficher();
        bool supprimer(int);
        bool modifier(int )    ;
        QStringList lister();
        QSqlQueryModel * trierage();
            QSqlQueryModel * trieralpha();
        QSqlQueryModel * rechercher(int);
        void stat(QCustomPlot *customPlot);


private:
    int id;
     int age;
     int numero;
    QString nom, prenom ;
};

#endif // clients_H
