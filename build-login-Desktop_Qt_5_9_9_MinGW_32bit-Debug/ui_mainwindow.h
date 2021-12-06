/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tab_Bus;
    QLabel *label_5;
    QPushButton *ButtonSupprimer;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *le_puissance_2;
    QLineEdit *le_marque_2;
    QLineEdit *le_type_2;
    QPushButton *Button_Modification;
    QComboBox *comboBox_2;
    QLabel *label_12;
    QLineEdit *le_matricule_2;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *le_matricule;
    QLineEdit *le_puissance;
    QLineEdit *le_marque;
    QLineEdit *le_type;
    QPushButton *Button_Ajouter;
    QComboBox *comboBox;
    QRadioButton *tripuissance;
    QRadioButton *trimarque;
    QLineEdit *lineEdit;
    QRadioButton *trimatricule;
    QWidget *tab_2;
    QPushButton *stat;
    QCustomPlot *widget;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_pic;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1092, 825);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 20, 1031, 731));
        tabWidget->setStyleSheet(QLatin1String("*{color: rgb(0, 0, 0);}\n"
"\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab_Bus = new QTableView(tab);
        tab_Bus->setObjectName(QStringLiteral("tab_Bus"));
        tab_Bus->setGeometry(QRect(20, 40, 541, 201));
        tab_Bus->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(670, 70, 56, 16));
        label_5->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        ButtonSupprimer = new QPushButton(tab);
        ButtonSupprimer->setObjectName(QStringLiteral("ButtonSupprimer"));
        ButtonSupprimer->setGeometry(QRect(710, 110, 80, 25));
        ButtonSupprimer->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(490, 290, 411, 361));
        groupBox_2->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 30, 56, 20));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 140, 56, 16));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 190, 56, 16));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 240, 56, 16));
        le_puissance_2 = new QLineEdit(groupBox_2);
        le_puissance_2->setObjectName(QStringLiteral("le_puissance_2"));
        le_puissance_2->setGeometry(QRect(110, 130, 113, 24));
        le_puissance_2->setStyleSheet(QStringLiteral("*{color:rgb(0, 0, 0);}"));
        le_marque_2 = new QLineEdit(groupBox_2);
        le_marque_2->setObjectName(QStringLiteral("le_marque_2"));
        le_marque_2->setGeometry(QRect(110, 190, 113, 24));
        le_marque_2->setStyleSheet(QStringLiteral("*{color:rgb(0, 0, 0);}"));
        le_type_2 = new QLineEdit(groupBox_2);
        le_type_2->setObjectName(QStringLiteral("le_type_2"));
        le_type_2->setGeometry(QRect(110, 240, 113, 24));
        le_type_2->setStyleSheet(QStringLiteral("*{color:rgb(0, 0, 0);}"));
        Button_Modification = new QPushButton(groupBox_2);
        Button_Modification->setObjectName(QStringLiteral("Button_Modification"));
        Button_Modification->setGeometry(QRect(250, 30, 80, 25));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(130, 30, 75, 24));
        comboBox_2->setStyleSheet(QStringLiteral(""));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(40, 290, 56, 20));
        le_matricule_2 = new QLineEdit(groupBox_2);
        le_matricule_2->setObjectName(QStringLiteral("le_matricule_2"));
        le_matricule_2->setGeometry(QRect(110, 290, 113, 24));
        le_matricule_2->setStyleSheet(QStringLiteral("*{color:rgb(0, 0, 0);}"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 290, 411, 361));
        groupBox->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 56, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 100, 56, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 140, 56, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 180, 56, 16));
        le_matricule = new QLineEdit(groupBox);
        le_matricule->setObjectName(QStringLiteral("le_matricule"));
        le_matricule->setGeometry(QRect(110, 60, 113, 24));
        le_matricule->setStyleSheet(QStringLiteral("*{color:rgb(0, 0, 0);}"));
        le_puissance = new QLineEdit(groupBox);
        le_puissance->setObjectName(QStringLiteral("le_puissance"));
        le_puissance->setGeometry(QRect(110, 100, 113, 24));
        le_puissance->setStyleSheet(QStringLiteral("*{color:rgb(0, 0, 0);}"));
        le_marque = new QLineEdit(groupBox);
        le_marque->setObjectName(QStringLiteral("le_marque"));
        le_marque->setGeometry(QRect(110, 140, 113, 24));
        le_marque->setStyleSheet(QStringLiteral("*{color:rgb(0, 0, 0);}"));
        le_type = new QLineEdit(groupBox);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(110, 180, 113, 24));
        le_type->setStyleSheet(QStringLiteral("*{color:rgb(0, 0, 0);}"));
        Button_Ajouter = new QPushButton(groupBox);
        Button_Ajouter->setObjectName(QStringLiteral("Button_Ajouter"));
        Button_Ajouter->setGeometry(QRect(130, 240, 80, 25));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(740, 70, 75, 24));
        comboBox->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        tripuissance = new QRadioButton(tab);
        tripuissance->setObjectName(QStringLiteral("tripuissance"));
        tripuissance->setGeometry(QRect(60, 10, 99, 22));
        tripuissance->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        trimarque = new QRadioButton(tab);
        trimarque->setObjectName(QStringLiteral("trimarque"));
        trimarque->setGeometry(QRect(240, 11, 99, 21));
        trimarque->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 250, 113, 24));
        lineEdit->setStyleSheet(QStringLiteral(""));
        trimatricule = new QRadioButton(tab);
        trimatricule->setObjectName(QStringLiteral("trimatricule"));
        trimatricule->setGeometry(QRect(410, 10, 99, 22));
        trimatricule->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        stat = new QPushButton(tab_2);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(60, 40, 80, 25));
        stat->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        widget = new QCustomPlot(tab_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 110, 501, 331));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(680, 360, 111, 20));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(57, 114, 171, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        label_10->setPalette(palette);
        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 30, 131, 16));
        QPalette palette1;
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(255, 255, 255, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush7(QColor(255, 255, 255, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_11->setPalette(palette1);
        label_11->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        label_pic = new QLabel(widget);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(-50, -90, 921, 701));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(920, 330, 80, 25));
        pushButton_2->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(920, 240, 80, 25));
        pushButton->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1092, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BUS", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Matricule:", Q_NULLPTR));
        ButtonSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Puissance", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Marque", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        Button_Modification->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Puissance", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Marque", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        Button_Ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tripuissance->setText(QApplication::translate("MainWindow", "Tri puissane", Q_NULLPTR));
        trimarque->setText(QApplication::translate("MainWindow", "Tri marque", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        trimatricule->setText(QApplication::translate("MainWindow", "Tri Matricule", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Gestion Des Bus", Q_NULLPTR));
        stat->setText(QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Puissance", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Bus", Q_NULLPTR));
        label_pic->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Close Map", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Open Map", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Statisque/Map", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
