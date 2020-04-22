#include "polynommainwindow.h"
#include "ui_polynommainwindow.h"

PolynomMainWindow::PolynomMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PolynomMainWindow)
{
    ui->setupUi(this);
    polynomSum = new PolynomSumWindow();
    connect(polynomSum, &PolynomSumWindow::firstWindow, this, &PolynomMainWindow::show);
}

PolynomMainWindow::~PolynomMainWindow()
{
    delete ui;
}
void PolynomMainWindow::on_back_clicked()
{
    this->close();
    emit firstWindow();
}
void PolynomMainWindow::on_sum_clicked()
{
    polynomSum->show();
    this->close();
}

