/********************************************************************************
** Form generated from reading UI file 'naturalsumwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NATURALSUMWINDOW_H
#define UI_NATURALSUMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NaturalSumWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextEdit *natural1;
    QTextEdit *natural2;
    QPushButton *result;
    QTextEdit *result_out;
    QLabel *label;
    QPushButton *replace_known_1;
    QPushButton *replace_known_2;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NaturalSumWindow)
    {
        if (NaturalSumWindow->objectName().isEmpty())
            NaturalSumWindow->setObjectName(QString::fromUtf8("NaturalSumWindow"));
        NaturalSumWindow->resize(800, 600);
        centralwidget = new QWidget(NaturalSumWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 61, 32));
        natural1 = new QTextEdit(centralwidget);
        natural1->setObjectName(QString::fromUtf8("natural1"));
        natural1->setGeometry(QRect(250, 30, 281, 21));
        natural1->setOverwriteMode(false);
        natural2 = new QTextEdit(centralwidget);
        natural2->setObjectName(QString::fromUtf8("natural2"));
        natural2->setGeometry(QRect(250, 60, 281, 21));
        result = new QPushButton(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(320, 100, 112, 32));
        result_out = new QTextEdit(centralwidget);
        result_out->setObjectName(QString::fromUtf8("result_out"));
        result_out->setGeometry(QRect(20, 200, 751, 241));
        result_out->setReadOnly(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 180, 221, 16));
        replace_known_1 = new QPushButton(centralwidget);
        replace_known_1->setObjectName(QString::fromUtf8("replace_known_1"));
        replace_known_1->setGeometry(QRect(540, 30, 261, 32));
        replace_known_2 = new QPushButton(centralwidget);
        replace_known_2->setObjectName(QString::fromUtf8("replace_known_2"));
        replace_known_2->setGeometry(QRect(540, 60, 261, 32));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(102, 40, 141, 22));
        NaturalSumWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NaturalSumWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        NaturalSumWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(NaturalSumWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NaturalSumWindow->setStatusBar(statusbar);

        retranslateUi(NaturalSumWindow);

        QMetaObject::connectSlotsByName(NaturalSumWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NaturalSumWindow)
    {
        NaturalSumWindow->setWindowTitle(QCoreApplication::translate("NaturalSumWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("NaturalSumWindow", "back", nullptr));
        result->setText(QCoreApplication::translate("NaturalSumWindow", "result", nullptr));
        label->setText(QCoreApplication::translate("NaturalSumWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        replace_known_1->setText(QCoreApplication::translate("NaturalSumWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        replace_known_2->setText(QCoreApplication::translate("NaturalSumWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NaturalSumWindow: public Ui_NaturalSumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NATURALSUMWINDOW_H
