/********************************************************************************
** Form generated from reading UI file 'polynomsumwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYNOMSUMWINDOW_H
#define UI_POLYNOMSUMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolynomSumWindow
{
public:
    QWidget *centralwidget;
    QPushButton *back;
    QTextEdit *result_out;
    QPushButton *result;
    QComboBox *comboBox;
    QLabel *warning;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *input1;
    QPushButton *pushButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *input2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PolynomSumWindow)
    {
        if (PolynomSumWindow->objectName().isEmpty())
            PolynomSumWindow->setObjectName(QString::fromUtf8("PolynomSumWindow"));
        PolynomSumWindow->resize(800, 600);
        centralwidget = new QWidget(PolynomSumWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(10, 10, 91, 32));
        result_out = new QTextEdit(centralwidget);
        result_out->setObjectName(QString::fromUtf8("result_out"));
        result_out->setGeometry(QRect(150, 300, 581, 221));
        result_out->setReadOnly(true);
        result = new QPushButton(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(270, 230, 112, 32));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 170, 141, 32));
        warning = new QLabel(centralwidget);
        warning->setObjectName(QString::fromUtf8("warning"));
        warning->setGeometry(QRect(200, 120, 251, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 30, 381, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 50, 191, 16));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(200, 150, 501, 33));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        input1 = new QLineEdit(widget);
        input1->setObjectName(QString::fromUtf8("input1"));
        input1->setMaxLength(999999999);

        horizontalLayout->addWidget(input1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(200, 190, 501, 33));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        input2 = new QLineEdit(widget1);
        input2->setObjectName(QString::fromUtf8("input2"));
        input2->setMaxLength(999999999);

        horizontalLayout_2->addWidget(input2);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        PolynomSumWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PolynomSumWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        PolynomSumWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(PolynomSumWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PolynomSumWindow->setStatusBar(statusbar);

        retranslateUi(PolynomSumWindow);

        QMetaObject::connectSlotsByName(PolynomSumWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PolynomSumWindow)
    {
        PolynomSumWindow->setWindowTitle(QCoreApplication::translate("PolynomSumWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \321\201 \320\264\320\262\321\203\320\274\321\217 \320\274\320\275\320\276\320\263\320\276\321\207\320\273\320\265\320\275\320\260\320\274\320\270", nullptr));
        back->setText(QCoreApplication::translate("PolynomSumWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        result->setText(QCoreApplication::translate("PolynomSumWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        warning->setText(QString());
        label->setText(QCoreApplication::translate("PolynomSumWindow", "\320\237\321\200\320\270\320\274\320\265\321\200\321\213 \320\262\320\262\320\276\320\264\320\260 \320\274\320\275\320\276\320\263\320\276\321\207\320\273\320\265\320\275\320\260: +12/32x^3+45/32x^5-43/24x^0", nullptr));
        label_2->setText(QCoreApplication::translate("PolynomSumWindow", "1/3x^4 \320\270\320\273\320\270 -1/3x^4+3/4x^3", nullptr));
        pushButton->setText(QCoreApplication::translate("PolynomSumWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PolynomSumWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolynomSumWindow: public Ui_PolynomSumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYNOMSUMWINDOW_H
