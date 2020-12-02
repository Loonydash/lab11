#include "deletecircle.h"
#include "Circle.h"
#include "Figures.h"
#include "ui_deletecircle.h"

deletecircle::deletecircle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletecircle)
{
    ui->setupUi(this);
}

deletecircle::~deletecircle()
{
    delete ui;
}

void deletecircle::on_pushButton_clicked()//сохранить
{

}

void deletecircle::on_pushButton_2_clicked()//назад
{

}
