#ifndef CHANGERECT_H
#define CHANGERECT_H

#include <QDialog>

namespace Ui {
class changerect;
}

class changerect : public QDialog
{
    Q_OBJECT

public:
    explicit changerect(QWidget *parent = nullptr);
    ~changerect();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::changerect *ui;
};

#endif // CHANGERECT_H
