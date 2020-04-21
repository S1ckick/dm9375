#include "integersumwindow.h"
#include "ui_integersumwindow.h"

IntegerSumWindow::IntegerSumWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::IntegerSumWindow)
{
    ui->setupUi(this);
}

IntegerSumWindow::~IntegerSumWindow()
{
    delete ui;
}

void IntegerSumWindow::on_back_clicked()
{
    this->close();
    ui->integer1->clear();
    ui->integer2->clear();
    emit firstWindow();
}

//void IntegerSumWindow::on_result_clicked()
//{

//}
