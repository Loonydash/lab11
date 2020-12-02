#ifndef ADDCIRCLE_H
#define ADDCIRCLE_H

#include <QDialog>

namespace Ui {
class addcircle;
}

class addcircle : public QDialog
{
    Q_OBJECT

public:
    explicit addcircle(QWidget *parent = nullptr);
    ~addcircle();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addcircle *ui;
};

#endif // ADDCIRCLE_H
