#ifndef DODAJPSA_H
#define DODAJPSA_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
namespace Ui {
class dodajpsa;
}

class dodajpsa : public QDialog
{
    Q_OBJECT

public:
    explicit dodajpsa(QWidget *parent = nullptr);
    ~dodajpsa();

private slots:
    void on_pushButton_zatwierdz_clicked();

private:
    Ui::dodajpsa *ui;
    QSqlDatabase mydb;
};

#endif // DODAJPSA_H
