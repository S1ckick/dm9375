#ifndef INTEGERMAINWINDOW_H
#define INTEGERMAINWINDOW_H

#include <QMainWindow>
#include "integersumwindow.h"
namespace Ui {
class IntegerMainWindow;
}

class IntegerMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit IntegerMainWindow(QWidget *parent = nullptr);
    ~IntegerMainWindow();
signals:
    void firstWindow();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::IntegerMainWindow *ui;
    IntegerSumWindow* integerSum;
};

#endif // INTEGERMAINWINDOW_H
