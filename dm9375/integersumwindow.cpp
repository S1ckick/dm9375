#include "integersumwindow.h"
#include "ui_integersumwindow.h"
#include "header.h"
#include <QRegExpValidator>
IntegerSumWindow::IntegerSumWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::IntegerSumWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Сложение");
    ui->comboBox->addItem("Вычитание");
    ui->comboBox->addItem("Умножение");
    ui->comboBox->addItem("Частное");
    ui->comboBox->addItem("Остаток");
    QValidator *validator = new QRegExpValidator(QRegExp("-?\\d+"));
    ui->input1->setValidator(validator);
    ui->input2->setValidator(validator);
}

IntegerSumWindow::~IntegerSumWindow()
{
    delete ui;
}

void IntegerSumWindow::on_back_clicked()
{
    this->close();
    ui->input1->clear();
    ui->input2->clear();
    emit firstWindow();
}

void IntegerSumWindow::on_result_clicked()
{
    if ((ui->input1->hasAcceptableInput()) && (ui->input2->hasAcceptableInput()))
    {
        ui->warning->clear();
        std::string integer1 = ui->input1->text().toStdString();
        std::string integer2 = ui->input2->text().toStdString();
        BigInteger BigI1(integer1);
        BigInteger BigI2(integer2);
        QString res;
        if (ui->comboBox->currentText() == "Сложение")
        {
            res = QString::fromStdString(ADD_ZZ_Z(BigI1, BigI2).ToString());
        }
        else if (ui->comboBox->currentText() == "Вычитание")
        {
            res = QString::fromStdString(SUB_ZZ_Z(BigI1, BigI2).ToString());
        }
        else if (ui->comboBox->currentText() == "Умножение")
        {
            res = QString::fromStdString(MUL_ZZ_Z(BigI1, BigI2).ToString());
        }
        else if (ui->comboBox->currentText() == "Частное")
        {
            res = QString::fromStdString(DIV_ZZ_Z(BigI1, BigI2).ToString());
        }
        else if (ui->comboBox->currentText() == "Остаток")
        {
            res = QString::fromStdString(MOD_ZZ_Z(BigI1, BigI2).ToString());
        }
        globalNumber.set_biginteger(res);
        ui->result_out->setText(res);
    }
    else
    {
       ui->warning->setText("Вы не до конца заполнили поля.");
    }
}
