/********************************************************************************
** Form generated from reading UI file 'znajdzpsaokno.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZNAJDZPSAOKNO_H
#define UI_ZNAJDZPSAOKNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Znajdzpsaokno
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEdit_zpimie;
    QLineEdit *lineEdit_zpnrr;
    QPushButton *Button_zp_wyszukaj;
    QPushButton *pushButton_pies;
    QPushButton *pushButton_suka;
    QPushButton *Button_zp_wyszukaj_2;
    QTableWidget *tableWidget;
    QSlider *horizontalSlider;

    void setupUi(QDialog *Znajdzpsaokno)
    {
        if (Znajdzpsaokno->objectName().isEmpty())
            Znajdzpsaokno->setObjectName("Znajdzpsaokno");
        Znajdzpsaokno->resize(1200, 700);
        label = new QLabel(Znajdzpsaokno);
        label->setObjectName("label");
        label->setGeometry(QRect(1100, 0, 71, 51));
        groupBox = new QGroupBox(Znajdzpsaokno);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 80, 551, 491));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 48, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 260, 81, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 120, 48, 16));
        lineEdit_zpimie = new QLineEdit(groupBox);
        lineEdit_zpimie->setObjectName("lineEdit_zpimie");
        lineEdit_zpimie->setGeometry(QRect(20, 70, 521, 24));
        lineEdit_zpnrr = new QLineEdit(groupBox);
        lineEdit_zpnrr->setObjectName("lineEdit_zpnrr");
        lineEdit_zpnrr->setGeometry(QRect(10, 300, 521, 24));
        Button_zp_wyszukaj = new QPushButton(groupBox);
        Button_zp_wyszukaj->setObjectName("Button_zp_wyszukaj");
        Button_zp_wyszukaj->setGeometry(QRect(240, 230, 80, 24));
        pushButton_pies = new QPushButton(groupBox);
        pushButton_pies->setObjectName("pushButton_pies");
        pushButton_pies->setGeometry(QRect(40, 150, 80, 24));
        pushButton_suka = new QPushButton(groupBox);
        pushButton_suka->setObjectName("pushButton_suka");
        pushButton_suka->setGeometry(QRect(400, 150, 80, 24));
        Button_zp_wyszukaj_2 = new QPushButton(groupBox);
        Button_zp_wyszukaj_2->setObjectName("Button_zp_wyszukaj_2");
        Button_zp_wyszukaj_2->setGeometry(QRect(230, 400, 111, 24));
        tableWidget = new QTableWidget(Znajdzpsaokno);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(580, 100, 581, 471));
        horizontalSlider = new QSlider(Znajdzpsaokno);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(580, 560, 581, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);

        retranslateUi(Znajdzpsaokno);

        QMetaObject::connectSlotsByName(Znajdzpsaokno);
    } // setupUi

    void retranslateUi(QDialog *Znajdzpsaokno)
    {
        Znajdzpsaokno->setWindowTitle(QCoreApplication::translate("Znajdzpsaokno", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Znajdzpsaokno", "Znajd\305\272 psa", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Znajdzpsaokno", "Znajd\305\272 psa", nullptr));
        label_2->setText(QCoreApplication::translate("Znajdzpsaokno", "Imi\304\231", nullptr));
        label_3->setText(QCoreApplication::translate("Znajdzpsaokno", "Nr. rodowodu", nullptr));
        label_5->setText(QCoreApplication::translate("Znajdzpsaokno", "P\305\202e\304\207", nullptr));
        Button_zp_wyszukaj->setText(QCoreApplication::translate("Znajdzpsaokno", "Wyszukaj psa", nullptr));
        pushButton_pies->setText(QCoreApplication::translate("Znajdzpsaokno", "pies", nullptr));
        pushButton_suka->setText(QCoreApplication::translate("Znajdzpsaokno", "suka", nullptr));
        Button_zp_wyszukaj_2->setText(QCoreApplication::translate("Znajdzpsaokno", "Wyszukaj rodowod", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Znajdzpsaokno: public Ui_Znajdzpsaokno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZNAJDZPSAOKNO_H
