#include "changedocument.h"
#include "Circle.h"
#include "Rectangle.h"
#include "VectorDocument.h"
#include "Figures.h"
#include "ui_changedocument.h"


changedocument::changedocument(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changedocument)
{
    ui->setupUi(this);
}

changedocument::~changedocument()
{
    delete ui;
}

void changedocument::on_pushButton_clicked()//сохранить
{

}

void changedocument::on_pushButton_2_clicked()//назад
{

}
