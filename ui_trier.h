/********************************************************************************
** Form generated from reading UI file 'trier.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIER_H
#define UI_TRIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Trier
{
public:
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QPushButton *pushButton;

    void setupUi(QDialog *Trier)
    {
        if (Trier->objectName().isEmpty())
            Trier->setObjectName(QStringLiteral("Trier"));
        Trier->resize(400, 325);
        label = new QLabel(Trier);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 100, 56, 16));
        checkBox = new QCheckBox(Trier);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(150, 100, 85, 22));
        checkBox_2 = new QCheckBox(Trier);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(150, 130, 85, 22));
        checkBox_3 = new QCheckBox(Trier);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(150, 160, 85, 22));
        pushButton = new QPushButton(Trier);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 240, 80, 25));

        retranslateUi(Trier);

        QMetaObject::connectSlotsByName(Trier);
    } // setupUi

    void retranslateUi(QDialog *Trier)
    {
        Trier->setWindowTitle(QApplication::translate("Trier", "Trier", Q_NULLPTR));
        label->setText(QApplication::translate("Trier", "Trier Par :", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Trier", "Matricule", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("Trier", "Marque ", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("Trier", "Type", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Trier", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Trier: public Ui_Trier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIER_H
