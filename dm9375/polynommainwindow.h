#ifndef POLYNOMMAINWINDOW_H
#define POLYNOMMAINWINDOW_H

#include <QMainWindow>
#include "polynomsumwindow.h"
namespace Ui {
class PolynomMainWindow;
}

class PolynomMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PolynomMainWindow(QWidget *parent = nullptr);
    ~PolynomMainWindow();

private slots:
    void on_sum_clicked();

    void on_back_clicked();

signals:
    void firstWindow();

private:
    Ui::PolynomMainWindow *ui;
    PolynomSumWindow *polynomSum;
};

#endif // POLYNOMMAINWINDOW_H
