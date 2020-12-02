#include "addrect.h"
#include "Rectangle.h"
#include "Figures.h"
#include "ui_addrect.h"

addrect::addrect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addrect)
{
    ui->setupUi(this);
}

addrect::~addrect()
{
    delete ui;
}

void addrect::on_pushButton_clicked()//сохранить
{

}

void addrect::on_pushButton_2_clicked()//назад
{

}
