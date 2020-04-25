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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolynomOneWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *polynom;
    QPushButton *pushButton_3;
    QPushButton *result;
    QLabel *label_3;
    QLabel *warning;
    QTextEdit *result_out;
    QComboBox *comboBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PolynomOneWindow)
    {
        if (PolynomOneWindow->objectName().isEmpty())
            PolynomOneWindow->setObjectName(QString::fromUtf8("PolynomOneWindow"));
        PolynomOneWindow->resize(800, 600);
        centralwidget = new QWidget(PolynomOneWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 110, 501, 33));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        polynom = new QLineEdit(layoutWidget);
        polynom->setObjectName(QString::fromUtf8("polynom"));
        polynom->setMaxLength(999999999);

        horizontalLayout_3->addWidget(polynom);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        result = new QPushButton(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(290, 160, 112, 32));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 260, 161, 41));
        warning = new QLabel(centralwidget);
        warning->setObjectName(QString::fromUtf8("warning"));
        warning->setGeometry(QRect(220, 80, 251, 16));
        result_out = new QTextEdit(centralwidget);
        result_out->setObjectName(QString::fromUtf8("result_out"));
        result_out->setGeometry(QRect(170, 260, 581, 221));
        result_out->setReadOnly(true);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 110, 141, 32));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 98, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        back = new QPushButton(layoutWidget_2);
        back->setObjectName(QString::fromUtf8("back"));

        horizontalLayout_4->addWidget(back);

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
        pushButton_3->setText(QCoreApplication::translate("PolynomOneWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        result->setText(QCoreApplication::translate("PolynomOneWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("PolynomOneWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        warning->setText(QString());
        back->setText(QCoreApplication::translate("PolynomOneWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolynomOneWindow: public Ui_PolynomOneWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYNOMONEWINDOW_H
