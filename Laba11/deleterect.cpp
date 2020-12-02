#include "deleterect.h"
#include "Rectangle.h"
#include "Figures.h"
#include "ui_deleterect.h"

deleterect::deleterect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleterect)
{
    ui->setupUi(this);
}

deleterect::~deleterect()
{
    delete ui;
}

void deleterect::on_pushButton_clicked() //сохранить
{

}

void deleterect::on_pushButton_2_clicked()//назад
{

}
