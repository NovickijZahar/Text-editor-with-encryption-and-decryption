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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab8Class
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLineEdit *lineEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;

    void setupUi(QWidget *Lab8Class)
    {
        if (Lab8Class->objectName().isEmpty())
            Lab8Class->setObjectName(QString::fromUtf8("Lab8Class"));
        Lab8Class->resize(1038, 720);
        layoutWidget = new QWidget(Lab8Class);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 291, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        spinBox = new QSpinBox(Lab8Class);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(80, 660, 91, 24));
        spinBox->setMinimum(-100);
        spinBox->setMaximum(100);
        pushButton_3 = new QPushButton(Lab8Class);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 620, 161, 71));
        QFont font;
        font.setPointSize(12);
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(Lab8Class);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(790, 620, 161, 71));
        pushButton_4->setFont(font);
        layoutWidget1 = new QWidget(Lab8Class);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(71, 620, 522, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_3->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget1);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_3->addWidget(radioButton_3);

        lineEdit = new QLineEdit(Lab8Class);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(230, 660, 161, 24));
        widget = new QWidget(Lab8Class);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 30, 971, 571));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font1;
        font1.setPointSize(10);
        textBrowser->setFont(font1);
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textBrowser->setReadOnly(false);

        horizontalLayout->addWidget(textBrowser);

        textBrowser_2 = new QTextBrowser(widget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setFont(font1);
        textBrowser_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        textBrowser_2->setReadOnly(true);

        horizontalLayout->addWidget(textBrowser_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Lab8Class);

        QMetaObject::connectSlotsByName(Lab8Class);
    } // setupUi

    void retranslateUi(QWidget *Lab8Class)
    {
        Lab8Class->setWindowTitle(QCoreApplication::translate("Lab8Class", "Lab8", nullptr));
        pushButton->setText(QCoreApplication::translate("Lab8Class", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Lab8Class", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Lab8Class", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Lab8Class", "\320\224\320\265\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        radioButton->setText(QCoreApplication::translate("Lab8Class", "\320\250\320\270\321\204\321\200 \320\246\320\265\320\267\320\260\321\200\321\217", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Lab8Class", "\320\250\320\270\321\204\321\200 \320\222\320\270\320\266\320\265\320\275\320\265\321\200\320\260", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Lab8Class", "\320\250\320\270\321\204\321\200 \320\220\321\202\320\261\320\260\321\210", nullptr));
        label->setText(QCoreApplication::translate("Lab8Class", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("Lab8Class", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab8Class: public Ui_Lab8Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB8_H
