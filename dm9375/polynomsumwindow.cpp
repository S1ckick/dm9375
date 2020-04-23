#include "polynomsumwindow.h"
#include "ui_polynomsumwindow.h"
#include "header.h"
#include <QRegExpValidator>
#include <QDebug>
PolynomSumWindow::PolynomSumWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::PolynomSumWindow)
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
    QValidator *validator = new QRegExpValidator(QRegExp("[-+]?\\d+\\/\\d+x\\^\\d+\(([+-]\\d+\\/\\d+x\\^\\d+)+)?"));
    ui->input1->setValidator(validator);
    ui->input2->setValidator(validator);
}

PolynomSumWindow::~PolynomSumWindow()
{
    delete ui;
}

void PolynomSumWindow::on_back_clicked()
{
    this->close();
    ui->warning->clear();
    ui->input1->clear();
    ui->input2->clear();
    this->close();
    emit firstWindow();
}
void PolynomSumWindow::on_result_clicked()
{
    if ((ui->input1->hasAcceptableInput()) && (ui->input2->hasAcceptableInput()))
    {
        ui->warning->clear();
        if ((ui->comboBox->currentText() == "Сложение") ||
            (ui->comboBox->currentText() == "Вычитание") ||
            (ui->comboBox->currentText() == "Умножение") ||
            (ui->comboBox->currentText() == "Частное") ||
            (ui->comboBox->currentText() == "Остаток") || (ui->comboBox->currentText() == "НОД"))
        {
            std::string polynom1 = ui->input1->text().toStdString();
            std::string polynom2 = ui->input2->text().toStdString();
            Polynom poli1 = read_pol(polynom1);
            Polynom poli2 = read_pol(polynom2);
            Polynom poli_out;
            if (ui->comboBox->currentText() == "Сложение")
            {
                poli_out = ADD_PP_P(poli1, poli2);
            }
            else if (ui->comboBox->currentText() == "Вычитание")
            {
                poli_out = SUB_PP_P(poli1, poli2);
            }
            else if (ui->comboBox->currentText() == "Умножение")
            {
                poli_out = MUL_PP_P(poli1, poli2);
            }
            else if (ui->comboBox->currentText() == "Частное")
            {
                poli_out = DIV_PP_P(poli1, poli2);
            }
            else if (ui->comboBox->currentText() == "Остаток")
            {
                poli_out = MOD_PP_P(poli1, poli2);
            }
            else if (ui->comboBox->currentText() == "НОД")
            {
                poli_out = GCF_PP_P(poli1, poli2);
            }
            ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
            globalNumber.set_polynom(QString::fromStdString(write_pol(poli_out)));
        }
        else
        {
            std::string polynom_str = ui->input1->text().toStdString();
            Polynom poli1 = read_pol(polynom_str);
            Polynom poli;
            if (ui->comboBox->currentText() == "Умножение на число")
            {
                std::string rational_str = ui->input2->text().toStdString();
                RationalFraction rational = read_frac(rational_str);
                poli = MUL_PQ_P(poli1, rational);
            }
            else if (ui->comboBox->currentText() == "x^k")
            {
                unsigned long int x_degree = ui->input2->text().toInt();
                poli = MUL_Pxk_P(poli1, x_degree);
            }
            ui->result_out->setText(QString::fromStdString(write_pol(poli)));
            globalNumber.set_polynom(QString::fromStdString(write_pol(poli)));
        }
    }
    else
    {
        ui->warning->setText("Вы не до конца заполнили поля.");
    }
}

void PolynomSumWindow::on_comboBox_activated(const QString &arg1)
{
    ui->input1->clear();
    ui->input2->clear();
    QValidator *validator = new QRegExpValidator(QRegExp("[-+]?\\d+\\/\\d+x\\^\\d+\(([+-]\\d+\\/\\d+x\\^\\d+)+)?"));
    ui->input1->setValidator(validator);
    if ((arg1 == "Сложение") || (arg1 == "Вычитание") || (arg1 == "Умножение") ||
        (arg1 == "Частное") || (arg1 == "Остаток") || (arg1 == "НОД"))
    {
        ui->input2->setValidator(validator);
    }
    else if (arg1 == "Умножение на число")
    {
        QValidator *validator2 = new QRegExpValidator(QRegExp("-?\\d+\\/?\\d+"));
        ui->input2->setValidator(validator2);
    }
    else if (arg1 == "x^k")
    {
        QValidator *validator2 = new QRegExpValidator(QRegExp("\\d+"));
        ui->input2->setValidator(validator2);
    }
}

void PolynomSumWindow::on_pushButton_clicked()
{
    ui->input1->setText(globalNumber.get_polynom());
}

void PolynomSumWindow::on_pushButton_2_clicked()
{
    if(ui->comboBox->currentText()=="Умножение на число")
    {
        ui->input2->setText(globalNumber.get_biginteger());
    }
    else if(!(ui->comboBox->currentText()=="x^k"))
    {
        ui->input2->setText(globalNumber.get_polynom());
    }
}
