#ifndef DODAJPSAOKNO_H
#define DODAJPSAOKNO_H

#include <QDialog>

namespace Ui {
class dodajpsaokno;
}

class dodajpsaokno : public QDialog
{
    Q_OBJECT

public:
    explicit dodajpsaokno(QWidget *parent = nullptr);
    ~dodajpsaokno();

private:
    Ui::dodajpsaokno *ui;
};

#endif // DODAJPSAOKNO_H
