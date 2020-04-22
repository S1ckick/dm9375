#include "polynomsumwindow.h"
#include "ui_polynomsumwindow.h"
#include "header.h"
#include <QDebug>
PolynomSumWindow::PolynomSumWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PolynomSumWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Сложение");
    ui->comboBox->addItem("Вычитание");
    ui->comboBox->addItem("Умножение");
    ui->comboBox->addItem("Частное");
    ui->comboBox->addItem("Остаток");
    ui->comboBox->addItem("Умножение на число");
    ui->comboBox->addItem("НОД");
    ui->comboBox->addItem("x^k");

}

PolynomSumWindow::~PolynomSumWindow()
{
    delete ui;
}

void PolynomSumWindow::on_back_clicked()
{
        this->close();
        emit firstWindow();
}
RationalFraction read_frac(std::string rational_str)
{
    unsigned long int i=0;
    std::string numenator;
    std::string denominator;
    while(rational_str[i]!='/')
    {
        numenator+=rational_str[i];
        i++;
    }
    i++;
    while(i<rational_str.size())
    {
        denominator+=rational_str[i];
        i++;
    }
    RationalFraction rational(numenator,denominator);
    return rational;
}
std::string write_frac(RationalFraction rational)
{
   return rational.numenator.ToString()+"/"+rational.denominator.ToString();
}
void PolynomSumWindow::on_result_clicked()
{
    if ((ui->comboBox->currentText() == "Сложение")||(ui->comboBox->currentText() == "Вычитание")||(ui->comboBox->currentText() == "Умножение")||(ui->comboBox->currentText() == "Частное")||(ui->comboBox->currentText() == "Остаток"))
    {
        std::string polynom1 = ui->input1->text().toStdString();
        std::string polynom2 = ui->input2->text().toStdString();
        Polynom poli1 = read_pol(polynom1);
        Polynom poli2 = read_pol(polynom2);
        if (ui->comboBox->currentText() == "Сложение")
        {
            Polynom poli_out = ADD_PP_P(poli1,poli2);
            ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
        }
        else if(ui->comboBox->currentText() == "Вычитание")
        {
            Polynom poli_out = SUB_PP_P(poli1,poli2);
            ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
        }
        else if(ui->comboBox->currentText() == "Умножение")
        {
            Polynom poli_out = MUL_PP_P(poli1,poli2);
            ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
        }
        else if(ui->comboBox->currentText() == "Частное")
        {
            Polynom poli_out = DIV_PP_P(poli1,poli2);
            ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
        }
        else if(ui->comboBox->currentText() == "Остаток")
        {
            Polynom poli_out = MOD_PP_P(poli1,poli2);
            ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
        }
    }
    else
    {
        std::string polynom_str = ui->input1->text().toStdString();
        std::string rational_str = ui->input2->text().toStdString();
        Polynom poli1=read_pol(polynom_str);
        RationalFraction rational = read_frac(rational_str);
        if(ui->comboBox->currentText() == "Умножение на число")
        {
            Polynom poli = MUL_PQ_P(poli1,rational);
            ui->result_out->setText(QString::fromStdString(write_pol(poli)));
        }
    }
}

