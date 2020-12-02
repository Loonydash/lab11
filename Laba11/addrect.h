#ifndef ADDRECT_H
#define ADDRECT_H

#include <QDialog>

namespace Ui {
class addrect;
}

class addrect : public QDialog
{
    Q_OBJECT

public:
    explicit addrect(QWidget *parent = nullptr);
    ~addrect();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addrect *ui;
};

#endif // ADDRECT_H
