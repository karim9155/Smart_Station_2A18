/********************************************************************************
** Form generated from reading UI file 'mainwindow1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow1
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_Nom_md;
    QLineEdit *lineEdit_Tel_md;
    QLineEdit *lineEdit_Email_md;
    QPushButton *bt_Ajouter_md;
    QComboBox *comboBox_2;
    QLabel *label_18;
    QLineEdit *lineEdit_age_md;
    QTableView *Tab_employe;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QPushButton *Supp_Button;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_Id;
    QLineEdit *lineEdit_Nom;
    QLineEdit *lineEdit_Tel;
    QLineEdit *lineEdit_Email;
    QPushButton *bt_Ajouter;
    QLineEdit *lineEdit_age;
    QLabel *label_17;
    QRadioButton *trialphabetique;
    QRadioButton *triage;
    QLineEdit *lineEdit;
    QPushButton *pushButton_8_;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *sendBtn;
    QPushButton *exitBtn;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *port;
    QLineEdit *uname;
    QLineEdit *paswd;
    QLineEdit *rcpt;
    QLineEdit *subject;
    QPlainTextEdit *msg;
    QLabel *label_10;
    QLineEdit *server;
    QWidget *tab_3;
    QCustomPlot *widget;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *stat;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow1)
    {
        if (MainWindow1->objectName().isEmpty())
            MainWindow1->setObjectName(QStringLiteral("MainWindow1"));
        MainWindow1->resize(1227, 728);
        centralWidget = new QWidget(MainWindow1);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 1211, 711));
        tabWidget->setStyleSheet(QStringLiteral("*{color: rgb(0, 0, 0);}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(360, 340, 791, 321));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 70, 56, 16));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 110, 81, 16));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 150, 56, 16));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 190, 56, 16));
        lineEdit_Nom_md = new QLineEdit(groupBox_3);
        lineEdit_Nom_md->setObjectName(QStringLiteral("lineEdit_Nom_md"));
        lineEdit_Nom_md->setGeometry(QRect(160, 110, 113, 22));
        lineEdit_Tel_md = new QLineEdit(groupBox_3);
        lineEdit_Tel_md->setObjectName(QStringLiteral("lineEdit_Tel_md"));
        lineEdit_Tel_md->setGeometry(QRect(160, 190, 113, 22));
        lineEdit_Email_md = new QLineEdit(groupBox_3);
        lineEdit_Email_md->setObjectName(QStringLiteral("lineEdit_Email_md"));
        lineEdit_Email_md->setGeometry(QRect(160, 150, 113, 22));
        bt_Ajouter_md = new QPushButton(groupBox_3);
        bt_Ajouter_md->setObjectName(QStringLiteral("bt_Ajouter_md"));
        bt_Ajouter_md->setGeometry(QRect(360, 190, 93, 28));
        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(160, 70, 111, 22));
        comboBox_2->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(50, 230, 56, 16));
        lineEdit_age_md = new QLineEdit(groupBox_3);
        lineEdit_age_md->setObjectName(QStringLiteral("lineEdit_age_md"));
        lineEdit_age_md->setGeometry(QRect(160, 230, 113, 22));
        Tab_employe = new QTableView(tab);
        Tab_employe->setObjectName(QStringLiteral("Tab_employe"));
        Tab_employe->setGeometry(QRect(360, 80, 761, 241));
        Tab_employe->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 340, 321, 291));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 60, 56, 16));
        Supp_Button = new QPushButton(groupBox_2);
        Supp_Button->setObjectName(QStringLiteral("Supp_Button"));
        Supp_Button->setGeometry(QRect(100, 100, 93, 28));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(110, 60, 131, 22));
        comboBox->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(-150, 0, 451, 321));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 40, 56, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 80, 81, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 200, 56, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 160, 56, 16));
        lineEdit_Id = new QLineEdit(groupBox);
        lineEdit_Id->setObjectName(QStringLiteral("lineEdit_Id"));
        lineEdit_Id->setGeometry(QRect(320, 30, 113, 22));
        lineEdit_Nom = new QLineEdit(groupBox);
        lineEdit_Nom->setObjectName(QStringLiteral("lineEdit_Nom"));
        lineEdit_Nom->setGeometry(QRect(320, 70, 113, 22));
        lineEdit_Tel = new QLineEdit(groupBox);
        lineEdit_Tel->setObjectName(QStringLiteral("lineEdit_Tel"));
        lineEdit_Tel->setGeometry(QRect(320, 150, 113, 22));
        lineEdit_Email = new QLineEdit(groupBox);
        lineEdit_Email->setObjectName(QStringLiteral("lineEdit_Email"));
        lineEdit_Email->setGeometry(QRect(320, 110, 113, 22));
        bt_Ajouter = new QPushButton(groupBox);
        bt_Ajouter->setObjectName(QStringLiteral("bt_Ajouter"));
        bt_Ajouter->setGeometry(QRect(250, 240, 93, 28));
        lineEdit_age = new QLineEdit(groupBox);
        lineEdit_age->setObjectName(QStringLiteral("lineEdit_age"));
        lineEdit_age->setGeometry(QRect(320, 190, 113, 22));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(240, 120, 56, 16));
        trialphabetique = new QRadioButton(tab);
        trialphabetique->setObjectName(QStringLiteral("trialphabetique"));
        trialphabetique->setGeometry(QRect(470, 30, 151, 20));
        trialphabetique->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        triage = new QRadioButton(tab);
        triage->setObjectName(QStringLiteral("triage"));
        triage->setGeometry(QRect(360, 30, 97, 20));
        triage->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(700, 30, 113, 22));
        pushButton_8_ = new QPushButton(tab);
        pushButton_8_->setObjectName(QStringLiteral("pushButton_8_"));
        pushButton_8_->setGeometry(QRect(970, 30, 93, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 350, 240, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sendBtn = new QPushButton(layoutWidget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout->addWidget(sendBtn);

        exitBtn = new QPushButton(layoutWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        horizontalLayout->addWidget(exitBtn);

        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(140, -60, 339, 380));
        formLayout = new QFormLayout(layoutWidget_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout->setVerticalSpacing(9);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_13);

        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_15);

        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_16);

        port = new QLineEdit(layoutWidget_2);
        port->setObjectName(QStringLiteral("port"));

        formLayout->setWidget(2, QFormLayout::FieldRole, port);

        uname = new QLineEdit(layoutWidget_2);
        uname->setObjectName(QStringLiteral("uname"));

        formLayout->setWidget(3, QFormLayout::FieldRole, uname);

        paswd = new QLineEdit(layoutWidget_2);
        paswd->setObjectName(QStringLiteral("paswd"));
        paswd->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, paswd);

        rcpt = new QLineEdit(layoutWidget_2);
        rcpt->setObjectName(QStringLiteral("rcpt"));

        formLayout->setWidget(5, QFormLayout::FieldRole, rcpt);

        subject = new QLineEdit(layoutWidget_2);
        subject->setObjectName(QStringLiteral("subject"));

        formLayout->setWidget(6, QFormLayout::FieldRole, subject);

        msg = new QPlainTextEdit(layoutWidget_2);
        msg->setObjectName(QStringLiteral("msg"));

        formLayout->setWidget(7, QFormLayout::FieldRole, msg);

        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_10);

        server = new QLineEdit(layoutWidget_2);
        server->setObjectName(QStringLiteral("server"));

        formLayout->setWidget(1, QFormLayout::FieldRole, server);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        widget = new QCustomPlot(tab_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 10, 891, 441));
        label_19 = new QLabel(widget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(680, 280, 111, 20));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(57, 114, 171, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
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
        QBrush brush3(QColor(255, 255, 255, 128));
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
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        label_19->setPalette(palette);
        label_19->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        label_20 = new QLabel(widget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(40, 30, 131, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush6(QColor(255, 255, 255, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush7(QColor(255, 255, 255, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label_20->setPalette(palette1);
        label_20->setStyleSheet(QStringLiteral("*{color: rgb(255, 255, 255);}"));
        stat = new QPushButton(tab_3);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(1020, 90, 93, 28));
        tabWidget->addTab(tab_3, QString());
        MainWindow1->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow1);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1227, 25));
        MainWindow1->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow1);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow1->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow1);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow1->setStatusBar(statusBar);

        retranslateUi(MainWindow1);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow1);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow1)
    {
        MainWindow1->setWindowTitle(QApplication::translate("MainWindow1", "Gestion des employe", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label_6->setText(QApplication::translate("MainWindow1", "ID", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow1", "nom/Pr\303\251nom", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow1", "Email", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow1", "Tel", Q_NULLPTR));
        bt_Ajouter_md->setText(QApplication::translate("MainWindow1", "Modifier", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow1", "age", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_5->setText(QApplication::translate("MainWindow1", "ID", Q_NULLPTR));
        Supp_Button->setText(QApplication::translate("MainWindow1", "Supprimer", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow1", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow1", "nom/Pr\303\251nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow1", "Email", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow1", "Tel", Q_NULLPTR));
        bt_Ajouter->setText(QApplication::translate("MainWindow1", "Ajouter", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow1", "age", Q_NULLPTR));
        trialphabetique->setText(QApplication::translate("MainWindow1", "tri alphabetique", Q_NULLPTR));
        triage->setText(QApplication::translate("MainWindow1", "tri age", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow1", "Rechercher", Q_NULLPTR));
        pushButton_8_->setText(QApplication::translate("MainWindow1", "PDF", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow1", "cruds", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MainWindow1", "Send", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("MainWindow1", "Exit", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow1", "Server port:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow1", "Username:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow1", "Password:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow1", "Recipant to:", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow1", "Subject:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow1", "Message:", Q_NULLPTR));
        port->setText(QApplication::translate("MainWindow1", "465", Q_NULLPTR));
        paswd->setInputMask(QString());
        label_10->setText(QApplication::translate("MainWindow1", "Smtp-server:", Q_NULLPTR));
        server->setText(QApplication::translate("MainWindow1", "smtp.gmail.com", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow1", "mail", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow1", "ages des employes", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow1", "nombre des employes", Q_NULLPTR));
        stat->setText(QApplication::translate("MainWindow1", "statistique", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow1", "statistique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow1: public Ui_MainWindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
