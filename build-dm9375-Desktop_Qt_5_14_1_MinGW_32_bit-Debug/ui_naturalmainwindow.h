/********************************************************************************
** Form generated from reading UI file 'naturalmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NATURALMAINWINDOW_H
#define UI_NATURALMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NaturalMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NaturalMainWindow)
    {
        if (NaturalMainWindow->objectName().isEmpty())
            NaturalMainWindow->setObjectName(QString::fromUtf8("NaturalMainWindow"));
        NaturalMainWindow->resize(800, 600);
        centralwidget = new QWidget(NaturalMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 10, 112, 32));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 70, 301, 32));
        NaturalMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NaturalMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        NaturalMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(NaturalMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NaturalMainWindow->setStatusBar(statusbar);

        retranslateUi(NaturalMainWindow);

        QMetaObject::connectSlotsByName(NaturalMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NaturalMainWindow)
    {
        NaturalMainWindow->setWindowTitle(QCoreApplication::translate("NaturalMainWindow", "\320\235\320\260\321\202\321\203\321\200\320\260\320\273\321\214\320\275\321\213\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("NaturalMainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("NaturalMainWindow", "\320\241\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\264\320\262\321\203\321\205 \320\275\320\260\321\202\321\203\321\200\320\260\320\273\321\214\320\275\321\213\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NaturalMainWindow: public Ui_NaturalMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NATURALMAINWINDOW_H
