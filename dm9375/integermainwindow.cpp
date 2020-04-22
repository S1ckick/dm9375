#include "integermainwindow.h"
#include "ui_integermainwindow.h"

IntegerMainWindow::IntegerMainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::IntegerMainWindow)
{
    ui->setupUi(this);
    integerSum = new IntegerSumWindow();
    connect(integerSum, &IntegerSumWindow::firstWindow, this, &IntegerMainWindow::show);
}

IntegerMainWindow::~IntegerMainWindow()
{
    delete ui;
}

void IntegerMainWindow::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
}

void IntegerMainWindow::on_pushButton_2_clicked()
{
    integerSum->show();
    this->close();
}
