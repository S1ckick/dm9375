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
    QValidator *validator = new QRegExpValidator(QRegExp("([+-]\\d+\\/\\d+x\\^\\d+)+"));
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
            if (ui->comboBox->currentText() == "Сложение")
            {
                Polynom poli_out = ADD_PP_P(poli1, poli2);
                ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
            }
            else if (ui->comboBox->currentText() == "Вычитание")
            {
                Polynom poli_out = SUB_PP_P(poli1, poli2);
                ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
            }
            else if (ui->comboBox->currentText() == "Умножение")
            {
                Polynom poli_out = MUL_PP_P(poli1, poli2);
                ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
            }
            else if (ui->comboBox->currentText() == "Частное")
            {
                Polynom poli_out = DIV_PP_P(poli1, poli2);
                ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
            }
            else if (ui->comboBox->currentText() == "Остаток")
            {
                Polynom poli_out = MOD_PP_P(poli1, poli2);
                ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
            }
            else if (ui->comboBox->currentText() == "НОД")
            {
                Polynom poli_out = GCF_PP_P(poli1, poli2);
                ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
            }
        }
        else
        {
            std::string polynom_str = ui->input1->text().toStdString();
            Polynom poli1 = read_pol(polynom_str);
            if (ui->comboBox->currentText() == "Умножение на число")
            {
                std::string rational_str = ui->input2->text().toStdString();
                RationalFraction rational = read_frac(rational_str);
                Polynom poli = MUL_PQ_P(poli1, rational);
                ui->result_out->setText(QString::fromStdString(write_pol(poli)));
            }
            else if (ui->comboBox->currentText() == "x^k")
            {
                unsigned long int x_degree = ui->input2->text().toInt();
                Polynom poli = MUL_Pxk_P(poli1, x_degree);
                ui->result_out->setText(QString::fromStdString(write_pol(poli)));
            }
        }
    }
    else
    {
        ui->warning->setText("Вы не до конца заполнили поля.");
    }
}

void PolynomSumWindow::on_comboBox_activated(const QString &arg1)
{
    if ((arg1 == "Сложение") || (arg1 == "Вычитание") || (arg1 == "Умножение") ||
        (arg1 == "Частное") || (arg1 == "Остаток") || (arg1 == "НОД"))
    {
        ui->input1->clear();
        ui->input2->clear();
        QValidator *validator = new QRegExpValidator(QRegExp("([+-]\\d+\\/\\d+x\\^\\d+)+"));
        ui->input1->setValidator(validator);
        ui->input2->setValidator(validator);
    }
    else if (arg1 == "Умножение на число")
    {
        ui->input1->clear();
        ui->input2->clear();
        QValidator *validator = new QRegExpValidator(QRegExp("([+-]\\d+\\/\\d+x\\^\\d+)+"));
        ui->input1->setValidator(validator);
        QValidator *validator2 = new QRegExpValidator(QRegExp("-?\\d+\\/?\\d+"));
        ui->input2->setValidator(validator2);
    }
    else if (arg1 == "x^k")
    {
        ui->input1->clear();
        ui->input2->clear();
        QValidator *validator = new QRegExpValidator(QRegExp("([+-]\\d+\\/\\d+x\\^\\d+)+"));
        ui->input1->setValidator(validator);
        QValidator *validator2 = new QRegExpValidator(QRegExp("\\d+"));
        ui->input2->setValidator(validator2);
    }
}
