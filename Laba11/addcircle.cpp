#include "addcircle.h"
#include "Circle.h"
#include "Figures.h"
#include "ui_addcircle.h"

addcircle::addcircle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addcircle)
{
    ui->setupUi(this);
}

addcircle::~addcircle()
{
    delete ui;
}


void addcircle::on_pushButton_clicked()//сохранить
{

}

void addcircle::on_pushButton_2_clicked()//назад
{

}
