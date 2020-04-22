#ifndef INTEGERSUM_H
#define INTEGERSUM_H

#include <QMainWindow>
namespace Ui
{
class IntegerSumWindow;
}

class IntegerSumWindow : public QMainWindow
{
    Q_OBJECT

  public:
    explicit IntegerSumWindow(QWidget *parent = nullptr);
    ~IntegerSumWindow();
  signals:
    void firstWindow();
  private slots:
    void on_back_clicked();

    void on_result_clicked();

  private:
    Ui::IntegerSumWindow *ui;
};

#endif // INTEGERSUM_H
