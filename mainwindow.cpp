
#include "mainwindow.h"
#include "./ui_mainwindow.h"


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



void MainWindow::on_pushButton_clicked()
{
    ui->tableWidget->setItem(1, 0, new QTableWidgetItem("Шашлык молотый"));
    ui->tableWidget->setItem(2, 0, new QTableWidgetItem("Шашлык кусковой "));
    ui->tableWidget->setItem(3, 0, new QTableWidgetItem("Шашлык куриный"));
    ui->tableWidget->setItem(4, 0, new QTableWidgetItem("Рыба жаренная "));
    ui->tableWidget->setItem(5, 0, new QTableWidgetItem("Мастава"));
    ui->tableWidget->setItem(6, 0, new QTableWidgetItem("Шурпа"));
    ui->tableWidget->setItem(1, 1, new QTableWidgetItem("12000 сум"));
    ui->tableWidget->setItem(2, 1, new QTableWidgetItem("55000 сум"));
    ui->tableWidget->setItem(3, 1, new QTableWidgetItem("50000 сум"));
    ui->tableWidget->setItem(4, 1, new QTableWidgetItem("70000 сум"));
    ui->tableWidget->setItem(5, 1, new QTableWidgetItem("30000 сум"));

}

