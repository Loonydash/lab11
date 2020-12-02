#ifndef DELETERECT_H
#define DELETERECT_H

#include <QDialog>

namespace Ui {
class deleterect;
}

class deleterect : public QDialog
{
    Q_OBJECT

public:
    explicit deleterect(QWidget *parent = nullptr);
    ~deleterect();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::deleterect *ui;
};

#endif // DELETERECT_H
