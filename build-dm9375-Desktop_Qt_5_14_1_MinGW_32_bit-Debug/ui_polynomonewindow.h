/********************************************************************************
** Form generated from reading UI file 'polynomonewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYNOMONEWINDOW_H
#define UI_POLYNOMONEWINDOW_H

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

class Ui_PolynomOneWindow
{
public:
    QWidget *centralwidget;
    QPushButton *back;
    QTextEdit *result_out;
    QPushButton *result;
    QLineEdit *polynom;
    QComboBox *comboBox;
    QLabel *warning;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PolynomOneWindow)
    {
        if (PolynomOneWindow->objectName().isEmpty())
            PolynomOneWindow->setObjectName(QString::fromUtf8("PolynomOneWindow"));
        PolynomOneWindow->resize(800, 600);
        centralwidget = new QWidget(PolynomOneWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(20, 10, 112, 32));
        result_out = new QTextEdit(centralwidget);
        result_out->setObjectName(QString::fromUtf8("result_out"));
        result_out->setGeometry(QRect(110, 200, 351, 141));
        result_out->setReadOnly(true);
        result = new QPushButton(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(210, 150, 112, 32));
        polynom = new QLineEdit(centralwidget);
        polynom->setObjectName(QString::fromUtf8("polynom"));
        polynom->setGeometry(QRect(170, 110, 201, 21));
        polynom->setMaxLength(999999999);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 70, 141, 32));
        warning = new QLabel(centralwidget);
        warning->setObjectName(QString::fromUtf8("warning"));
        warning->setGeometry(QRect(160, 40, 221, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 110, 261, 32));
        PolynomOneWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PolynomOneWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        PolynomOneWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(PolynomOneWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PolynomOneWindow->setStatusBar(statusbar);

        retranslateUi(PolynomOneWindow);

        QMetaObject::connectSlotsByName(PolynomOneWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PolynomOneWindow)
    {
        PolynomOneWindow->setWindowTitle(QCoreApplication::translate("PolynomOneWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \321\201 \320\274\320\275\320\276\320\263\320\276\321\207\320\273\320\265\320\275\320\276\320\274", nullptr));
        back->setText(QCoreApplication::translate("PolynomOneWindow", "back", nullptr));
        result->setText(QCoreApplication::translate("PolynomOneWindow", "result", nullptr));
        warning->setText(QString());
        pushButton->setText(QCoreApplication::translate("PolynomOneWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolynomOneWindow: public Ui_PolynomOneWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYNOMONEWINDOW_H
