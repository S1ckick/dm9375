#ifndef POLYNOMSUMWINDOW_H
#define POLYNOMSUMWINDOW_H

#include <QMainWindow>

namespace Ui
{
class PolynomSumWindow;
}

class PolynomSumWindow : public QMainWindow
{
    Q_OBJECT

  public:
    explicit PolynomSumWindow(QWidget *parent = nullptr);
    ~PolynomSumWindow();

  private slots:
    void on_back_clicked();

    void on_result_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void firstWindow();

  private:
    Ui::PolynomSumWindow *ui;
};

#endif // POLYNOMSUMWINDOW_H
