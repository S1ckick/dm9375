/********************************************************************************
** Form generated from reading UI file 'integermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTEGERMAINWINDOW_H
#define UI_INTEGERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntegerMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *IntegerMainWindow)
    {
        if (IntegerMainWindow->objectName().isEmpty())
            IntegerMainWindow->setObjectName(QString::fromUtf8("IntegerMainWindow"));
        IntegerMainWindow->resize(800, 600);
        centralwidget = new QWidget(IntegerMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 112, 32));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 90, 112, 32));
        IntegerMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(IntegerMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        IntegerMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(IntegerMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        IntegerMainWindow->setStatusBar(statusbar);

        retranslateUi(IntegerMainWindow);

        QMetaObject::connectSlotsByName(IntegerMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *IntegerMainWindow)
    {
        IntegerMainWindow->setWindowTitle(QCoreApplication::translate("IntegerMainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("IntegerMainWindow", "back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("IntegerMainWindow", "\320\241\321\203\320\274\320\274\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntegerMainWindow: public Ui_IntegerMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGERMAINWINDOW_H
