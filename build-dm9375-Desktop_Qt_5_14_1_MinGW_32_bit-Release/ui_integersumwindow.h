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

class Ui_IntegerSumWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *result_out;
    QComboBox *comboBox;
    QLabel *warning;
    QPushButton *result;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *input1;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *input2;
    QPushButton *pushButton_2;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *IntegerSumWindow)
    {
        if (IntegerSumWindow->objectName().isEmpty())
            IntegerSumWindow->setObjectName(QString::fromUtf8("IntegerSumWindow"));
        IntegerSumWindow->resize(800, 600);
        centralwidget = new QWidget(IntegerSumWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        result_out = new QTextEdit(centralwidget);
        result_out->setObjectName(QString::fromUtf8("result_out"));
        result_out->setGeometry(QRect(170, 260, 581, 221));
        result_out->setReadOnly(true);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 130, 141, 32));
        warning = new QLabel(centralwidget);
        warning->setObjectName(QString::fromUtf8("warning"));
        warning->setGeometry(QRect(220, 80, 251, 16));
        result = new QPushButton(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(290, 190, 112, 32));
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

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 260, 161, 41));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 98, 32));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        back = new QPushButton(widget);
        back->setObjectName(QString::fromUtf8("back"));

        horizontalLayout_3->addWidget(back);

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
        warning->setText(QString());
        result->setText(QCoreApplication::translate("IntegerSumWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        pushButton->setText(QCoreApplication::translate("IntegerSumWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        pushButton_2->setText(QCoreApplication::translate("IntegerSumWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        label->setText(QCoreApplication::translate("IntegerSumWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        back->setText(QCoreApplication::translate("IntegerSumWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntegerSumWindow: public Ui_IntegerSumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGERSUMWINDOW_H
