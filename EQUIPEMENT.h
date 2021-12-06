#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
#include <QString>
#include <QSqlQueryModel>
#include <QDate>
#include<QTableView>
#include<qcustomplot.h>

class EQUIPEMENT
{
        public:
            EQUIPEMENT();
            EQUIPEMENT(QString ,QString,int,QDate,int);
            QString get(){return CODE_A_BARRE;}
            int getPRIX(){return PRIX;}
            int getNOMBRE(){return NOMBRE;}
            QString getTYPE() {return TYPE;}
            QDate getDATE_D_ACHAT(){return  DATE_D_ACHAT;}
            bool ajouter();
            QSqlQueryModel * afficher();
            bool supprimer(QString);
            bool update(QString ,QString,int,QDate,int);
            QSqlQueryModel * rechercher_EQUIPEMENT(QString,QString,int );
            QSqlQueryModel *trier(QString );
            void exporter(QTableView *table);
            QSqlQueryModel* historique();
            void stat(QCustomPlot *customPlot);
            private:
            QString CODE_A_BARRE;
            int NOMBRE;
            int PRIX;
            QString TYPE;
            QDate  DATE_D_ACHAT;

        };

#endif // EQUIPEMENT_H
