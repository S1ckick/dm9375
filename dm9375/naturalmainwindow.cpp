#include "naturalmainwindow.h"
#include "ui_naturalmainwindow.h"

NaturalMainWindow::NaturalMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NaturalMainWindow)
{
    ui->setupUi(this);
    naturalSum = new NaturalSumWindow();
    connect(naturalSum, &NaturalSumWindow::firstWindow, this, &NaturalMainWindow::show);
}

NaturalMainWindow::~NaturalMainWindow()
{
    delete ui;
}

void NaturalMainWindow::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
}

void NaturalMainWindow::on_pushButton_2_clicked()
{
    naturalSum->show();
    this->close();
}
