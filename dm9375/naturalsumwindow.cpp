#include "naturalsumwindow.h"
#include "ui_naturalsumwindow.h"
#include <QRegExpValidator>
#include "header.h"

NaturalSumWindow::NaturalSumWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::NaturalSumWindow)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Сложение");
    ui->comboBox->addItem("Вычитание");
    ui->comboBox->addItem("Умножение");
    ui->comboBox->addItem("Частное");
    ui->comboBox->addItem("Остаток");
    ui->comboBox->addItem("НОД");
    ui->comboBox->addItem("НОК");
    ui->comboBox->addItem("10^k");
    QValidator *validator = new QRegExpValidator(QRegExp("\\d+"));
    ui->natural1->setValidator(validator);
    ui->natural2->setValidator(validator);
}

NaturalSumWindow::~NaturalSumWindow()
{
    delete ui;
}

void NaturalSumWindow::on_pushButton_clicked()
{
    this->close();
    ui->natural1->clear();
    ui->natural2->clear();
    emit firstWindow();
}

void NaturalSumWindow::on_result_clicked()
{
    if ((ui->natural1->hasAcceptableInput()) && (ui->natural2->hasAcceptableInput()))
    {
        ui->warning->clear();
        std::string natural1 = ui->natural1->text().toStdString();
        BigNatural BigN1(natural1);
        if ((ui->comboBox->currentText() == "Сложение") ||
            (ui->comboBox->currentText() == "Вычитание") ||
            (ui->comboBox->currentText() == "Умножение") ||
            (ui->comboBox->currentText() == "Частное") ||
            (ui->comboBox->currentText() == "Остаток") || (ui->comboBox->currentText() == "НОД") ||
            (ui->comboBox->currentText() == "НОК"))
        {
            std::string natural2 = ui->natural2->text().toStdString();
            BigNatural BigN2(natural2);
            if (ui->comboBox->currentText() == "Сложение")
            {
                QString sum = QString::fromStdString(ADD_NN_N(BigN1, BigN2).ToString());
                globalNumber.set_bignatural(sum);
                ui->result_out->setText(sum);
            }
            else if (ui->comboBox->currentText() == "Вычитание")
            {
                QString sub = QString::fromStdString(SUB_NN_N(BigN1, BigN2).ToString());
                globalNumber.set_bignatural(sub);
                ui->result_out->setText(sub);
            }
            else if (ui->comboBox->currentText() == "Умножение")
            {
                QString mul = QString::fromStdString(MUL_NN_N(BigN1, BigN2).ToString());
                globalNumber.set_bignatural(mul);
                ui->result_out->setText(mul);
            }
            else if (ui->comboBox->currentText() == "Частное")
            {
                QString res = QString::fromStdString(DIV_NN_N(BigN1, BigN2).ToString());
                globalNumber.set_bignatural(res);
                ui->result_out->setText(res);
            }
            else if (ui->comboBox->currentText() == "Остаток")
            {
                QString res = QString::fromStdString(MOD_NN_N(BigN1, BigN2).ToString());
                globalNumber.set_bignatural(res);
                ui->result_out->setText(res);
            }
            else if (ui->comboBox->currentText() == "НОД")
            {
                QString res = QString::fromStdString(GCF_NN_N(BigN1, BigN2).ToString());
                globalNumber.set_bignatural(res);
                ui->result_out->setText(res);
            }
            else if (ui->comboBox->currentText() == "НОК")
            {
                QString res = QString::fromStdString(LCM_NN_N(BigN1, BigN2).ToString());
                globalNumber.set_bignatural(res);
                ui->result_out->setText(res);
            }
        }
        else
        {
            if (ui->comboBox->currentText() == "10^k")
            {
                int tenDegree = ui->natural2->text().toInt();
                QString res = QString::fromStdString(MUL_Nk_N(BigN1, tenDegree).ToString());
                globalNumber.set_bignatural(res);
                ui->result_out->setText(res);
            }
        }
    }
    else
    {
        ui->warning->setText("Вы не до конца заполнили поля.");
    }
}

void NaturalSumWindow::on_replace_known_1_clicked()
{
    ui->natural1->setText(globalNumber.get_bignatural());
}

void NaturalSumWindow::on_replace_known_2_clicked()
{
    ui->natural2->setText(globalNumber.get_bignatural());
}
