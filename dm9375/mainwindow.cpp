#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    naturalWindow = new NaturalSumWindow();
    connect(naturalWindow, &NaturalSumWindow::firstWindow, this, &MainWindow::show);
    integerWindow = new IntegerSumWindow();
    connect(integerWindow, &IntegerSumWindow::firstWindow, this, &MainWindow::show);
    polynomWindow = new PolynomMainWindow();
    connect(polynomWindow, &PolynomMainWindow::firstWindow, this, &MainWindow::show);
    rationalWindow = new RationalMainWindow();
    connect(rationalWindow, &RationalMainWindow::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    naturalWindow->show();
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    integerWindow->show();
    this->close();
}

void MainWindow::on_pushButton_3_clicked()
{
    polynomWindow->show();
    this->close();
}

void MainWindow::on_pushButton_4_clicked()
{
    rationalWindow->show();
    this->close();
}
