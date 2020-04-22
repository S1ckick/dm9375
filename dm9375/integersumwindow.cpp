#include "integersumwindow.h"
#include "ui_integersumwindow.h"
#include "header.h"
#include <QRegExpValidator>
IntegerSumWindow::IntegerSumWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::IntegerSumWindow)
{
    ui->setupUi(this);
    QValidator *validator = new QRegExpValidator(QRegExp("-?\\d+"));
    ui->integer1->setValidator(validator);
    ui->integer2->setValidator(validator);
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
    std::string integer1 = ui->integer1->text().toStdString();
    std::string integer2 = ui->integer2->text().toStdString();
    BigInteger BigI1(integer1);
    BigInteger BigI2(integer2);
    QString sum = QString::fromStdString(ADD_ZZ_Z(BigI1,BigI2).ToString());
    globalNumber.set_biginteger(sum);
    ui->result_out->setText(sum);
}
