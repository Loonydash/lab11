#include "changerect.h"
#include "Rectangle.h"
#include "Figures.h"
#include "ui_changerect.h"

changerect::changerect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changerect)
{
    ui->setupUi(this);
}

changerect::~changerect()
{
    delete ui;
}

void changerect::on_pushButton_clicked()//сохранить
{

}

void changerect::on_pushButton_2_clicked() //назад
{

}

void changerect::on_pushButton_3_clicked()//вывести информацию
{

}
