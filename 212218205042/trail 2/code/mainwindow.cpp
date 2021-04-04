#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>

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


void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked()){
        stream<<"Burger IS CHECKED"<<Qt::endl;}
    else{
        stream<<"Burger IS UNCHECKED"<<Qt::endl;
    }
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked()){
        stream<<"Zinger Burger IS CHECKED"<<Qt::endl;}
    else{
        stream<<"Zinger Burger IS UNCHECKED"<<Qt::endl;
    }
}


void MainWindow::on_checkBox_3_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked()){
        stream<<"Panner Burger IS CHECKED"<<Qt::endl;
    }
    else{
        stream<<"Panner Burger IS UNCHECKED"<<Qt::endl;
    }
}
