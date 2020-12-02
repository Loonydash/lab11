#ifndef CHANGEDOCUMENT_H
#define CHANGEDOCUMENT_H

#include <QDialog>

namespace Ui {
class changedocument;
}

class changedocument : public QDialog
{
    Q_OBJECT

public:
    explicit changedocument(QWidget *parent = nullptr);
    ~changedocument();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::changedocument *ui;
};

#endif // CHANGEDOCUMENT_H
