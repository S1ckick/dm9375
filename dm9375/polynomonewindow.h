#ifndef POLYNOMONEWINDOW_H
#define POLYNOMONEWINDOW_H

#include <QMainWindow>

namespace Ui
{
class PolynomOneWindow;
}

class PolynomOneWindow : public QMainWindow
{
    Q_OBJECT

  public:
    explicit PolynomOneWindow(QWidget *parent = nullptr);
    ~PolynomOneWindow();

  private slots:
    void on_back_clicked();

    void on_result_clicked();

    void on_pushButton_3_clicked();

signals:
    void firstWindow();

  private:
    Ui::PolynomOneWindow *ui;
};

#endif // POLYNOMONEWINDOW_H
