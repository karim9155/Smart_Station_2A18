/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *ref;
    QLineEdit *prix;
    QDateEdit *dateEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *comboBoxEtat;
    QWidget *tab_3;
    QTableView *tableRep;
    QLineEdit *Rech;
    QComboBox *comboBoxRech;
    QPushButton *pushButton_4;
    QComboBox *comboBoxTri;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *tab_4;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QStringLiteral("MainWindow2"));
        MainWindow2->resize(800, 600);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(70, 40, 701, 511));
        tabWidget->setStyleSheet(QStringLiteral("*{color: rgb(0, 0, 0);}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        ref = new QLineEdit(tab);
        ref->setObjectName(QStringLiteral("ref"));
        ref->setGeometry(QRect(150, 50, 113, 22));
        prix = new QLineEdit(tab);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(150, 160, 113, 22));
        dateEdit = new QDateEdit(tab);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(150, 210, 110, 22));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 56, 16));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 56, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 160, 56, 16));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 210, 56, 16));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 300, 93, 28));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 260, 93, 28));
        comboBoxEtat = new QComboBox(tab);
        comboBoxEtat->setObjectName(QStringLiteral("comboBoxEtat"));
        comboBoxEtat->setGeometry(QRect(150, 100, 111, 22));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableRep = new QTableView(tab_3);
        tableRep->setObjectName(QStringLiteral("tableRep"));
        tableRep->setGeometry(QRect(80, 100, 421, 301));
        Rech = new QLineEdit(tab_3);
        Rech->setObjectName(QStringLiteral("Rech"));
        Rech->setGeometry(QRect(310, 50, 113, 22));
        comboBoxRech = new QComboBox(tab_3);
        comboBoxRech->setObjectName(QStringLiteral("comboBoxRech"));
        comboBoxRech->setGeometry(QRect(310, 20, 111, 22));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(430, 50, 93, 21));
        comboBoxTri = new QComboBox(tab_3);
        comboBoxTri->setObjectName(QStringLiteral("comboBoxTri"));
        comboBoxTri->setGeometry(QRect(80, 30, 101, 22));
        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(110, 60, 71, 21));
        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(230, 410, 93, 28));
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(520, 100, 93, 28));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        horizontalFrame = new QFrame(tab_4);
        horizontalFrame->setObjectName(QStringLiteral("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(40, 30, 631, 411));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget->addTab(tab_4, QString());
        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow2->setStatusBar(statusbar);

        retranslateUi(MainWindow2);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QApplication::translate("MainWindow2", "Reparation", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow2", "ref", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow2", "etat", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow2", "prix", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow2", "date_rep", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow2", "Ajouter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow2", "Modifier", Q_NULLPTR));
        comboBoxEtat->clear();
        comboBoxEtat->insertItems(0, QStringList()
         << QApplication::translate("MainWindow2", "En marche", Q_NULLPTR)
         << QApplication::translate("MainWindow2", "En panne", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow2", "Ajouter/Modifier", Q_NULLPTR));
        comboBoxRech->clear();
        comboBoxRech->insertItems(0, QStringList()
         << QApplication::translate("MainWindow2", "ref", Q_NULLPTR)
         << QApplication::translate("MainWindow2", "prix", Q_NULLPTR)
        );
        pushButton_4->setText(QApplication::translate("MainWindow2", "Rechercher", Q_NULLPTR));
        comboBoxTri->clear();
        comboBoxTri->insertItems(0, QStringList()
         << QApplication::translate("MainWindow2", "etat", Q_NULLPTR)
         << QApplication::translate("MainWindow2", "prix", Q_NULLPTR)
         << QApplication::translate("MainWindow2", "date_rep", Q_NULLPTR)
        );
        pushButton_5->setText(QApplication::translate("MainWindow2", "Trier", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow2", "Imprimer", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow2", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow2", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow2", "Statistiques", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
