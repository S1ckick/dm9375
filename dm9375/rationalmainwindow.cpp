#include "rationalmainwindow.h"
#include "ui_rationalmainwindow.h"
#include "header.h"
#include <QRegExpValidator>
#include <QDebug>
RationalMainWindow::RationalMainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::RationalMainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Сложение");
    ui->comboBox->addItem("Вычитание");
    ui->comboBox->addItem("Умножение");
    ui->comboBox->addItem("Деление");
    QValidator *validator = new QRegExpValidator(QRegExp("-?\\d+\\/\\d+"));
    ui->input1->setValidator(validator);
    ui->input2->setValidator(validator);
}

RationalMainWindow::~RationalMainWindow()
{
    delete ui;
}

void RationalMainWindow::on_back_clicked()
{
    ui->input1->clear();
    ui->input2->clear();
    ui->warning->clear();
    this->close();
    emit firstWindow();
}

void RationalMainWindow::on_result_clicked()
{
    if ((ui->input1->hasAcceptableInput()) && (ui->input2->hasAcceptableInput()))
    {
        ui->warning->clear();
        std::string rational_str1 = ui->input1->text().toStdString();
        std::string rational_str2 = ui->input2->text().toStdString();
        RationalFraction rational1 = read_frac(rational_str1);
        RationalFraction rational2 = read_frac(rational_str2);
        QString res;
        if (ui->comboBox->currentText() == "Сложение")
        {
            res = QString::fromStdString(write_frac(ADD_QQ_Q(rational1, rational2)));
        }
        if (ui->comboBox->currentText() == "Вычитание")
        {
            res = QString::fromStdString(write_frac(SUB_QQ_Q(rational1, rational2)));
        }
        if (ui->comboBox->currentText() == "Умножение")
        {
            res = QString::fromStdString(write_frac(MUL_QQ_Q(rational1, rational2)));
        }
        if (ui->comboBox->currentText() == "Деление")
        {
            res = QString::fromStdString(write_frac(DIV_QQ_Q(rational1, rational2)));
        }
        globalNumber.set_rational(res);
        ui->result_out->setText(res);
    }
    else
    {
        ui->warning->setText("Вы не до конца заполнили поля.");
    }
}
void RationalMainWindow::on_pushButton_clicked()
{
    ui->input1->setText(globalNumber.get_rational());
}

void RationalMainWindow::on_pushButton_2_clicked()
{
    ui->input2->setText(globalNumber.get_rational());
}
