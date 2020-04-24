/********************************************************************************
** Form generated from reading UI file 'polynommainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYNOMMAINWINDOW_H
#define UI_POLYNOMMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolynomMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *back;
    QPushButton *sum;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PolynomMainWindow)
    {
        if (PolynomMainWindow->objectName().isEmpty())
            PolynomMainWindow->setObjectName(QString::fromUtf8("PolynomMainWindow"));
        PolynomMainWindow->resize(800, 600);
        centralwidget = new QWidget(PolynomMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(10, 10, 112, 32));
        sum = new QPushButton(centralwidget);
        sum->setObjectName(QString::fromUtf8("sum"));
        sum->setGeometry(QRect(10, 70, 251, 32));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 70, 241, 32));
        PolynomMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PolynomMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        PolynomMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(PolynomMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PolynomMainWindow->setStatusBar(statusbar);

        retranslateUi(PolynomMainWindow);

        QMetaObject::connectSlotsByName(PolynomMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PolynomMainWindow)
    {
        PolynomMainWindow->setWindowTitle(QCoreApplication::translate("PolynomMainWindow", "\320\234\320\275\320\276\320\263\320\276\321\207\320\273\320\265\320\275\321\213", nullptr));
        back->setText(QCoreApplication::translate("PolynomMainWindow", "back", nullptr));
        sum->setText(QCoreApplication::translate("PolynomMainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \320\275\320\260\320\264 2-\320\274\321\217 \320\274\320\275\320\276\320\263\320\276\321\207\320\273\320\265\320\275\320\260\320\274\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("PolynomMainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \321\201 \320\274\320\275\320\276\320\263\320\276\321\207\320\273\320\265\320\275\320\276\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolynomMainWindow: public Ui_PolynomMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYNOMMAINWINDOW_H
