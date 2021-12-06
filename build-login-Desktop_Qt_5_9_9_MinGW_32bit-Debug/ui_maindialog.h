/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QPushButton *BUS;
    QPushButton *EMPLOYES;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QStringLiteral("MainDialog"));
        MainDialog->resize(640, 480);
        BUS = new QPushButton(MainDialog);
        BUS->setObjectName(QStringLiteral("BUS"));
        BUS->setGeometry(QRect(59, 100, 91, 25));
        EMPLOYES = new QPushButton(MainDialog);
        EMPLOYES->setObjectName(QStringLiteral("EMPLOYES"));
        EMPLOYES->setGeometry(QRect(59, 160, 91, 25));
        pushButton = new QPushButton(MainDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(59, 220, 91, 25));
        pushButton_3 = new QPushButton(MainDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(59, 270, 91, 25));
        pushButton_4 = new QPushButton(MainDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(59, 320, 91, 25));
        pushButton_5 = new QPushButton(MainDialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(59, 370, 91, 25));

        retranslateUi(MainDialog);

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QApplication::translate("MainDialog", "Smartn", Q_NULLPTR));
        BUS->setText(QApplication::translate("MainDialog", "BUS", Q_NULLPTR));
        EMPLOYES->setText(QApplication::translate("MainDialog", "EMPLOYES", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainDialog", "TICKETS", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainDialog", "REPARATION", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainDialog", "CLIENTS", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainDialog", "EQUIPEMENT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
