/********************************************************************************
** Form generated from reading UI file 'Lab8.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB8_H
#define UI_LAB8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab8Class
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;

    void setupUi(QWidget *Lab8Class)
    {
        if (Lab8Class->objectName().isEmpty())
            Lab8Class->setObjectName(QString::fromUtf8("Lab8Class"));
        Lab8Class->resize(1081, 720);
        pushButton = new QPushButton(Lab8Class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 93, 28));
        pushButton_2 = new QPushButton(Lab8Class);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 0, 93, 28));
        widget = new QWidget(Lab8Class);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 50, 1001, 561));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setReadOnly(false);

        horizontalLayout->addWidget(textBrowser);

        textBrowser_2 = new QTextBrowser(widget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setReadOnly(false);

        horizontalLayout->addWidget(textBrowser_2);


        retranslateUi(Lab8Class);

        QMetaObject::connectSlotsByName(Lab8Class);
    } // setupUi

    void retranslateUi(QWidget *Lab8Class)
    {
        Lab8Class->setWindowTitle(QCoreApplication::translate("Lab8Class", "Lab8", nullptr));
        pushButton->setText(QCoreApplication::translate("Lab8Class", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Lab8Class", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab8Class: public Ui_Lab8Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB8_H
