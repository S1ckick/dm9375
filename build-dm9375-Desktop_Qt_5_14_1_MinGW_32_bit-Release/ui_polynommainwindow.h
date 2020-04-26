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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolynomMainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *sum;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PolynomMainWindow)
    {
        if (PolynomMainWindow->objectName().isEmpty())
            PolynomMainWindow->setObjectName(QString::fromUtf8("PolynomMainWindow"));
        PolynomMainWindow->resize(800, 600);
        centralwidget = new QWidget(PolynomMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 98, 32));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        back = new QPushButton(layoutWidget);
        back->setObjectName(QString::fromUtf8("back"));

        horizontalLayout_3->addWidget(back);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(270, 150, 259, 171));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        sum = new QPushButton(widget);
        sum->setObjectName(QString::fromUtf8("sum"));

        gridLayout->addWidget(sum, 0, 0, 1, 1);

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
        back->setText(QCoreApplication::translate("PolynomMainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton->setText(QCoreApplication::translate("PolynomMainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \321\201 \320\274\320\275\320\276\320\263\320\276\321\207\320\273\320\265\320\275\320\276\320\274", nullptr));
        sum->setText(QCoreApplication::translate("PolynomMainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \320\275\320\260\320\264 2-\320\274\321\217 \320\274\320\275\320\276\320\263\320\276\321\207\320\273\320\265\320\275\320\260\320\274\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolynomMainWindow: public Ui_PolynomMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYNOMMAINWINDOW_H
