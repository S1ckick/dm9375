#include "polynomonewindow.h"
#include "ui_polynomonewindow.h"
#include "header.h"

PolynomOneWindow::PolynomOneWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PolynomOneWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Производная");
    ui->comboBox->addItem("Простые");
    ui->comboBox->addItem("Старший коэфф.");
    ui->comboBox->addItem("Степень");
}

PolynomOneWindow::~PolynomOneWindow()
{
    delete ui;
}

void PolynomOneWindow::on_back_clicked()
{
    this->close();
    emit firstWindow();
}

void PolynomOneWindow::on_result_clicked()
{
        std::string polynom = ui->polynom->text().toStdString();
        Polynom poli = read_pol(polynom);
        if (ui->comboBox->currentText() == "Производная")
        {
            Polynom poli_out = DER_P_P(poli);
            ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
        }
        else if (ui->comboBox->currentText() == "Простые")
        {
            Polynom poli_out = NMR_P_P(poli);
            ui->result_out->setText(QString::fromStdString(write_pol(poli_out)));
        }
        else if (ui->comboBox->currentText() == "Старший коэфф.")
        {
            RationalFraction poli_out = LED_P_Q(poli);
            QString numenator = QString::fromStdString(poli_out.numenator.ToString());
            QString denominator = QString::fromStdString(poli_out.denominator.ToString());
            QString str = numenator+'/'+denominator;
            ui->result_out->setText(str);
        }
        else if (ui->comboBox->currentText() == "Степень")
        {
            unsigned int degree = DEG_P_N(poli);
            ui->result_out->setText(QString::number(degree));
        }
}
