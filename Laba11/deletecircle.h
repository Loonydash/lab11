#ifndef DELETECIRCLE_H
#define DELETECIRCLE_H

#include <QDialog>

namespace Ui {
class deletecircle;
}

class deletecircle : public QDialog
{
    Q_OBJECT

public:
    explicit deletecircle(QWidget *parent = nullptr);
    ~deletecircle();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::deletecircle *ui;
};

#endif // DELETECIRCLE_H
