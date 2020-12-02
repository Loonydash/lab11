#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addcircle.h"
#include "addrect.h"
#include "changecircle.h"
#include "changerect.h"
#include "changedocument.h"
#include "deletecircle.h"
#include "deleterect.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()//добавить круг
{
    addcircle window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_4_clicked() //добавить прямоугольник
{
    addrect window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_clicked()//работать с кругом
{
    changecircle window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_2_clicked()//работать с прямоугольником
{
    changerect window;
    window.setModal(true);
    window.exec();
}
void MainWindow::on_pushButton_7_clicked() //раотать с документом
{
    changedocument window;
    window.setModal(true);
    window.exec();
}
void MainWindow::on_pushButton_5_clicked()//удалить круг
{
    deletecircle window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_6_clicked()//удалить прямоугольник
{
    changerect window;
    window.setModal(true);
    window.exec();
}


