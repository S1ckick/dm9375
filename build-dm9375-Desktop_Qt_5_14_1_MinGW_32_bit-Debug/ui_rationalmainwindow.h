/********************************************************************************
** Form generated from reading UI file 'rationalmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RATIONALMAINWINDOW_H
#define UI_RATIONALMAINWINDOW_H

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

class Ui_RationalMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *known1;
    QPushButton *back;
    QComboBox *comboBox;
    QLineEdit *input1;
    QPushButton *result;
    QTextEdit *result_out;
    QLineEdit *input2;
    QLabel *warning;
    QPushButton *known1_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RationalMainWindow)
    {
        if (RationalMainWindow->objectName().isEmpty())
            RationalMainWindow->setObjectName(QString::fromUtf8("RationalMainWindow"));
        RationalMainWindow->resize(800, 600);
        centralwidget = new QWidget(RationalMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        known1 = new QPushButton(centralwidget);
        known1->setObjectName(QString::fromUtf8("known1"));
        known1->setGeometry(QRect(340, 40, 231, 32));
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(20, 10, 112, 32));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 50, 131, 32));
        input1 = new QLineEdit(centralwidget);
        input1->setObjectName(QString::fromUtf8("input1"));
        input1->setGeometry(QRect(170, 40, 161, 21));
        input1->setMaxLength(999999999);
        result = new QPushButton(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(200, 120, 112, 32));
        result_out = new QTextEdit(centralwidget);
        result_out->setObjectName(QString::fromUtf8("result_out"));
        result_out->setGeometry(QRect(140, 250, 251, 74));
        result_out->setReadOnly(true);
        input2 = new QLineEdit(centralwidget);
        input2->setObjectName(QString::fromUtf8("input2"));
        input2->setGeometry(QRect(170, 70, 161, 21));
        input2->setMaxLength(999999999);
        warning = new QLabel(centralwidget);
        warning->setObjectName(QString::fromUtf8("warning"));
        warning->setGeometry(QRect(140, 10, 221, 20));
        known1_2 = new QPushButton(centralwidget);
        known1_2->setObjectName(QString::fromUtf8("known1_2"));
        known1_2->setGeometry(QRect(340, 70, 231, 32));
        RationalMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RationalMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        RationalMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RationalMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RationalMainWindow->setStatusBar(statusbar);

        retranslateUi(RationalMainWindow);

        QMetaObject::connectSlotsByName(RationalMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RationalMainWindow)
    {
        RationalMainWindow->setWindowTitle(QCoreApplication::translate("RationalMainWindow", "\320\240\320\260\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\321\213\320\265 \320\264\321\200\320\276\320\261\320\270", nullptr));
        known1->setText(QCoreApplication::translate("RationalMainWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        back->setText(QCoreApplication::translate("RationalMainWindow", "back", nullptr));
        result->setText(QCoreApplication::translate("RationalMainWindow", "result", nullptr));
        warning->setText(QString());
        known1_2->setText(QCoreApplication::translate("RationalMainWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RationalMainWindow: public Ui_RationalMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RATIONALMAINWINDOW_H
