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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolynomSumWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *result;
    QLabel *warning;
    QTextEdit *result_out;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *input2;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *input1;
    QPushButton *pushButton;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PolynomSumWindow)
    {
        if (PolynomSumWindow->objectName().isEmpty())
            PolynomSumWindow->setObjectName(QString::fromUtf8("PolynomSumWindow"));
        PolynomSumWindow->resize(800, 600);
        centralwidget = new QWidget(PolynomSumWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 30, 381, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 50, 191, 16));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 130, 141, 32));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 260, 161, 41));
        result = new QPushButton(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(290, 190, 112, 32));
        warning = new QLabel(centralwidget);
        warning->setObjectName(QString::fromUtf8("warning"));
        warning->setGeometry(QRect(220, 80, 251, 16));
        result_out = new QTextEdit(centralwidget);
        result_out->setObjectName(QString::fromUtf8("result_out"));
        result_out->setGeometry(QRect(170, 260, 581, 221));
        result_out->setReadOnly(true);
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(220, 150, 501, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        input2 = new QLineEdit(layoutWidget_2);
        input2->setObjectName(QString::fromUtf8("input2"));
        input2->setMaxLength(999999999);

        horizontalLayout_2->addWidget(input2);

        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 110, 501, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        input1 = new QLineEdit(layoutWidget);
        input1->setObjectName(QString::fromUtf8("input1"));
        input1->setMaxLength(999999999);

        horizontalLayout->addWidget(input1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 0, 98, 32));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        back = new QPushButton(layoutWidget_3);
        back->setObjectName(QString::fromUtf8("back"));

        horizontalLayout_3->addWidget(back);

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
        label->setText(QCoreApplication::translate("PolynomSumWindow", "\320\237\321\200\320\270\320\274\320\265\321\200\321\213 \320\262\320\262\320\276\320\264\320\260 \320\274\320\275\320\276\320\263\320\276\321\207\320\273\320\265\320\275\320\260: +12/32x^3+45/32x^5-43/24x^0", nullptr));
        label_2->setText(QCoreApplication::translate("PolynomSumWindow", "1/3x^4 \320\270\320\273\320\270 -1/3x^4+3/4x^3", nullptr));
        label_3->setText(QCoreApplication::translate("PolynomSumWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        result->setText(QCoreApplication::translate("PolynomSumWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        warning->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("PolynomSumWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        pushButton->setText(QCoreApplication::translate("PolynomSumWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        back->setText(QCoreApplication::translate("PolynomSumWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolynomSumWindow: public Ui_PolynomSumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYNOMSUMWINDOW_H
