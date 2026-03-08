#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dodajpsa.h"
#include "znajdzpsaokno.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ZnajdzPsa_clicked();

    void on_Dodaj_psa_clicked();

private:
    Ui::MainWindow *ui;
    dodajpsa *dpsa;
    Znajdzpsaokno *zpsa;
};
#endif // MAINWINDOW_H
