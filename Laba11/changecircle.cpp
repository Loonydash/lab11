#include "changecircle.h"
#include "Circle.h"
#include "Figures.h"
#include "ui_changecircle.h"

changecircle::changecircle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changecircle)
{
    ui->setupUi(this);
}

changecircle::~changecircle()
{
    delete ui;
}

void changecircle::on_pushButton_clicked()//сохранить
{

}

void changecircle::on_pushButton_2_clicked()//назад
{

}

void changecircle::on_pushButton_3_clicked()//удалить
{

}
