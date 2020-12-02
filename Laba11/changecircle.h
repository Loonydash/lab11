#ifndef CHANGECIRCLE_H
#define CHANGECIRCLE_H

#include <QDialog>

namespace Ui {
class changecircle;
}

class changecircle : public QDialog
{
    Q_OBJECT

public:
    explicit changecircle(QWidget *parent = nullptr);
    ~changecircle();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::changecircle *ui;
};

#endif // CHANGECIRCLE_H
