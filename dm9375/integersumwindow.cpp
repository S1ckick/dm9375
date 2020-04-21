#include "integersumwindow.h"
#include "ui_integersumwindow.h"
#include "header.h"
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

void IntegerSumWindow::on_result_clicked()
{
    std::string integer1 = ui->integer1->toPlainText().toStdString();
    std::string integer2 = ui->integer2->toPlainText().toStdString();
    BigInteger bigI1(integer1);
    BigInteger bigI2(integer2);
    QString sum = QString::fromStdString(ADD_ZZ_Z(bigI1,bigI2).ToString());
    globalNumber.set_biginteger(sum);
    ui->result_out->setText(sum);
}
