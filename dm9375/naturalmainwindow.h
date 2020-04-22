#ifndef NATURALMAINWINDOW_H
#define NATURALMAINWINDOW_H

#include <QMainWindow>
#include "naturalsumwindow.h"
namespace Ui
{
class NaturalMainWindow;
}

class NaturalMainWindow : public QMainWindow
{
    Q_OBJECT

  public:
    explicit NaturalMainWindow(QWidget *parent = nullptr);
    ~NaturalMainWindow();

  signals:
    void firstWindow();

  private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

  private:
    Ui::NaturalMainWindow *ui;
    NaturalSumWindow *naturalSum;
};

#endif // NATURALMAINWINDOW_H
