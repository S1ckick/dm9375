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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *known1;
    QPushButton *result;
    QLineEdit *input2;
    QLineEdit *input1;
    QComboBox *comboBox;
    QLabel *warning;
    QPushButton *known1_2;
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
        known1 = new QPushButton(centralwidget);
        known1->setObjectName(QString::fromUtf8("known1"));
        known1->setGeometry(QRect(320, 30, 241, 32));
        result = new QPushButton(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(180, 110, 112, 32));
        input2 = new QLineEdit(centralwidget);
        input2->setObjectName(QString::fromUtf8("input2"));
        input2->setGeometry(QRect(150, 60, 161, 21));
        input2->setMaxLength(999999999);
        input1 = new QLineEdit(centralwidget);
        input1->setObjectName(QString::fromUtf8("input1"));
        input1->setGeometry(QRect(150, 30, 161, 21));
        input1->setMaxLength(999999999);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 40, 131, 32));
        warning = new QLabel(centralwidget);
        warning->setObjectName(QString::fromUtf8("warning"));
        warning->setGeometry(QRect(120, 0, 221, 20));
        known1_2 = new QPushButton(centralwidget);
        known1_2->setObjectName(QString::fromUtf8("known1_2"));
        known1_2->setGeometry(QRect(320, 60, 241, 32));
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
        IntegerSumWindow->setWindowTitle(QCoreApplication::translate("IntegerSumWindow", "\320\246\320\265\320\273\321\213\320\265 \321\207\320\270\321\201\320\273\320\260", nullptr));
        back->setText(QCoreApplication::translate("IntegerSumWindow", "back", nullptr));
        known1->setText(QCoreApplication::translate("IntegerSumWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\211\321\203\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        result->setText(QCoreApplication::translate("IntegerSumWindow", "result", nullptr));
        input1->setInputMask(QString());
        warning->setText(QString());
        known1_2->setText(QCoreApplication::translate("IntegerSumWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\211\321\203\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntegerSumWindow: public Ui_IntegerSumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGERSUMWINDOW_H
