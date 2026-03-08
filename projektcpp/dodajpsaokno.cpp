#include "dodajpsaokno.h"
#include <QMessageBox>
#include <QSqlQuery>
#include "ui_dodajpsaokno.h"

Dodajpsaokno::Dodajpsaokno(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dodajpsaokno)
{
    ui->setupUi(this);
    //     mydb = QSqlDatabase::addDatabase("QSQLITE");
    //     mydb.setDatabaseName("C:/Users/User/Desktop/Rodowody.db");

    //     if (mydb.open())
    //     {
    //         // ui->label->setText("dziala!!!!!!!");
    //     }
    //     if (!mydb.open())
    //     {
    //         // ui->label->setText("dupa nie dizala :(");
    //     }
}
Dodajpsaokno::~Dodajpsaokno()
{
    delete ui;
}
