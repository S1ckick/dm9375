#include "naturalsumwindow.h"
#include "ui_naturalsumwindow.h"

NaturalSumWindow::NaturalSumWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NaturalSumWindow)
{
    ui->setupUi(this);
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
    QString sum = QString::fromStdString(ADD_NN_N(BigN1,BigN2).ToString());
    ui->result_out->setText(sum);
}

