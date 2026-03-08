#ifndef ZNAJDZPSAOKNO_H
#define ZNAJDZPSAOKNO_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class Znajdzpsaokno;
}

class Znajdzpsaokno : public QDialog
{
    Q_OBJECT

public:
    explicit Znajdzpsaokno(QWidget *parent = nullptr);
    ~Znajdzpsaokno();

private slots:
    void on_Button_zp_wyszukaj_clicked();

    void on_pushButton_pies_clicked();

    void on_pushButton_suka_clicked();

    void on_Button_zp_wyszukaj_2_clicked();

private:
    Ui::Znajdzpsaokno *ui;
    QSqlDatabase mydb;
};

#endif // ZNAJDZPSAOKNO_H
