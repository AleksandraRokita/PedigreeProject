#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "dodajpsa.h"
#include "znajdzpsaokno.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/User/Desktop/Rodowody.db");

    if (mydb.open())
    {
        ui->label->setText("dziala!!!!!!!");
    }
    // if (!mydb.open())
    // {
    //     ui->label->setText("dupa nie dizala :(");
    // }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ZnajdzPsa_clicked()
{
    zpsa= new Znajdzpsaokno(this);
    zpsa-> show();
}


void MainWindow::on_Dodaj_psa_clicked()
{
    // Dodajpsaokno dpsa;
    // dpsa.setModal(true);
    // dpsa.exec();
    dpsa= new dodajpsa (this);
    dpsa-> show();
}

