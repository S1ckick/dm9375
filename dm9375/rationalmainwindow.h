#ifndef RATIONALMAINWINDOW_H
#define RATIONALMAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
class RationalMainWindow;
}

class RationalMainWindow : public QMainWindow
{
    Q_OBJECT

  public:
    explicit RationalMainWindow(QWidget *parent = nullptr);
    ~RationalMainWindow();

  private slots:
    void on_back_clicked();

    void on_result_clicked();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void firstWindow();

  private:
    Ui::RationalMainWindow *ui;
};

#endif // RATIONALMAINWINDOW_H
