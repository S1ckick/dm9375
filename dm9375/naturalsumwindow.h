#ifndef NATURALSUMWINDOW_H
#define NATURALSUMWINDOW_H

#include <QMainWindow>
#include "header.h"
namespace Ui {
class NaturalSumWindow;
}

class NaturalSumWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NaturalSumWindow(QWidget *parent = nullptr);
    ~NaturalSumWindow();
signals:
    void firstWindow();
private slots:
    void on_pushButton_clicked();
    void on_result_clicked();

private:
    Ui::NaturalSumWindow *ui;
};

#endif // NATURALSUMWINDOW_H