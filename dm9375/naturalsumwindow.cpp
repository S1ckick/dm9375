#include "naturalsumwindow.h"
#include "ui_naturalsumwindow.h"


NaturalSumWindow::NaturalSumWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NaturalSumWindow)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Сложение");
    ui->comboBox->addItem("Вычитание");
    ui->comboBox->addItem("Умножение");
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
    std::string natural1 = ui->natural1->toPlainText().toStdString();
    std::string natural2 = ui->natural2->toPlainText().toStdString();
    BigNatural BigN1(natural1);
    BigNatural BigN2(natural2);
    if (ui->comboBox->currentText() == "Сложение")
    {
    QString sum = QString::fromStdString(ADD_NN_N(BigN1,BigN2).ToString());
    globalNumber.set_bignatural(sum);
    ui->result_out->setText(sum);
    }
    else if (ui->comboBox->currentText() == "Вычитание")
    {
        QString sub = QString::fromStdString(SUB_NN_N(BigN1,BigN2).ToString());
        globalNumber.set_bignatural(sub);
        ui->result_out->setText(sub);
    }
    else if (ui->comboBox->currentText() == "Умножение")
    {
        QString mul = QString::fromStdString(MUL_NN_N(BigN1,BigN2).ToString());
        globalNumber.set_bignatural(mul);
        ui->result_out->setText(mul);
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
