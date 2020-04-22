#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "naturalmainwindow.h"
#include "integermainwindow.h"
#include "polynommainwindow.h"
#include "rationalmainwindow.h"
QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

  public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

  private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

  private:
    Ui::MainWindow *ui;
    NaturalMainWindow *naturalWindow;
    IntegerMainWindow *integerWindow;
    PolynomMainWindow *polynomWindow;
    RationalMainWindow *rationalWindow;
};
#endif // MAINWINDOW_H
