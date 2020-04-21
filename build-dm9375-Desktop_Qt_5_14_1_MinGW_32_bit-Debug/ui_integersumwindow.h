/********************************************************************************
** Form generated from reading UI file 'integersumwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTEGERSUMWINDOW_H
#define UI_INTEGERSUMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntegerSumWindow
{
public:
    QWidget *centralwidget;
    QPushButton *back;
    QTextEdit *result_out;
    QPushButton *pushButton_2;
    QPushButton *result;
    QTextEdit *integer1;
    QTextEdit *integer2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *IntegerSumWindow)
    {
        if (IntegerSumWindow->objectName().isEmpty())
            IntegerSumWindow->setObjectName(QString::fromUtf8("IntegerSumWindow"));
        IntegerSumWindow->resize(800, 600);
        centralwidget = new QWidget(IntegerSumWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(0, 0, 112, 32));
        result_out = new QTextEdit(centralwidget);
        result_out->setObjectName(QString::fromUtf8("result_out"));
        result_out->setGeometry(QRect(120, 240, 251, 74));
        result_out->setReadOnly(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 20, 112, 32));
        result = new QPushButton(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(180, 110, 112, 32));
        integer1 = new QTextEdit(centralwidget);
        integer1->setObjectName(QString::fromUtf8("integer1"));
        integer1->setGeometry(QRect(150, 30, 161, 21));
        integer2 = new QTextEdit(centralwidget);
        integer2->setObjectName(QString::fromUtf8("integer2"));
        integer2->setGeometry(QRect(150, 60, 161, 21));
        IntegerSumWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(IntegerSumWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        IntegerSumWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(IntegerSumWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        IntegerSumWindow->setStatusBar(statusbar);

        retranslateUi(IntegerSumWindow);

        QMetaObject::connectSlotsByName(IntegerSumWindow);
    } // setupUi

    void retranslateUi(QMainWindow *IntegerSumWindow)
    {
        IntegerSumWindow->setWindowTitle(QCoreApplication::translate("IntegerSumWindow", "MainWindow", nullptr));
        back->setText(QCoreApplication::translate("IntegerSumWindow", "back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("IntegerSumWindow", "PushButton", nullptr));
        result->setText(QCoreApplication::translate("IntegerSumWindow", "result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntegerSumWindow: public Ui_IntegerSumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGERSUMWINDOW_H
