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
#include <QtWidgets/QSpacerItem>
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
    QPushButton *openFileButton;
    QPushButton *saveToFileButton;
    QSpinBox *spinBox;
    QPushButton *encryptButton;
    QPushButton *decryptButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLineEdit *lineEdit;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pasteButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *copyButton;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;

    void setupUi(QWidget *Lab8Class)
    {
        if (Lab8Class->objectName().isEmpty())
            Lab8Class->setObjectName(QString::fromUtf8("Lab8Class"));
        Lab8Class->resize(1066, 702);
        layoutWidget = new QWidget(Lab8Class);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 291, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        openFileButton = new QPushButton(layoutWidget);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));

        horizontalLayout_2->addWidget(openFileButton);

        saveToFileButton = new QPushButton(layoutWidget);
        saveToFileButton->setObjectName(QString::fromUtf8("saveToFileButton"));

        horizontalLayout_2->addWidget(saveToFileButton);

        spinBox = new QSpinBox(Lab8Class);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(80, 660, 91, 24));
        spinBox->setMinimum(-100);
        spinBox->setMaximum(100);
        encryptButton = new QPushButton(Lab8Class);
        encryptButton->setObjectName(QString::fromUtf8("encryptButton"));
        encryptButton->setGeometry(QRect(760, 610, 121, 41));
        QFont font;
        font.setPointSize(10);
        encryptButton->setFont(font);
        decryptButton = new QPushButton(Lab8Class);
        decryptButton->setObjectName(QString::fromUtf8("decryptButton"));
        decryptButton->setGeometry(QRect(890, 610, 121, 41));
        decryptButton->setFont(font);
        layoutWidget1 = new QWidget(Lab8Class);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(71, 620, 522, 24));
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
        layoutWidget2 = new QWidget(Lab8Class);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 30, 971, 571));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pasteButton = new QPushButton(layoutWidget2);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        pasteButton->setFont(font);

        horizontalLayout_5->addWidget(pasteButton);

        horizontalSpacer_2 = new QSpacerItem(350, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        clearButton = new QPushButton(layoutWidget2);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setFont(font);

        horizontalLayout_5->addWidget(clearButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        copyButton = new QPushButton(layoutWidget2);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        copyButton->setFont(font);

        horizontalLayout_5->addWidget(copyButton);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(layoutWidget2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setFont(font);
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textBrowser->setReadOnly(false);

        horizontalLayout->addWidget(textBrowser);

        textBrowser_2 = new QTextBrowser(layoutWidget2);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setFont(font);
        textBrowser_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        textBrowser_2->setReadOnly(true);

        horizontalLayout->addWidget(textBrowser_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayoutWidget_2 = new QWidget(Lab8Class);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(420, 650, 203, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        radioButton_4 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        horizontalLayout_6->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        horizontalLayout_6->addWidget(radioButton_5);


        retranslateUi(Lab8Class);

        QMetaObject::connectSlotsByName(Lab8Class);
    } // setupUi

    void retranslateUi(QWidget *Lab8Class)
    {
        Lab8Class->setWindowTitle(QCoreApplication::translate("Lab8Class", "Lab8", nullptr));
        openFileButton->setText(QCoreApplication::translate("Lab8Class", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        saveToFileButton->setText(QCoreApplication::translate("Lab8Class", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        encryptButton->setText(QCoreApplication::translate("Lab8Class", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        decryptButton->setText(QCoreApplication::translate("Lab8Class", "\320\224\320\265\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        radioButton->setText(QCoreApplication::translate("Lab8Class", "\320\250\320\270\321\204\321\200 \320\246\320\265\320\267\320\260\321\200\321\217", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Lab8Class", "\320\250\320\270\321\204\321\200 \320\222\320\270\320\266\320\265\320\275\320\265\321\200\320\260", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Lab8Class", "\320\250\320\270\321\204\321\200 \320\220\321\202\320\261\320\260\321\210", nullptr));
        label->setText(QCoreApplication::translate("Lab8Class", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("Lab8Class", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202", nullptr));
        pasteButton->setText(QCoreApplication::translate("Lab8Class", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        clearButton->setText(QCoreApplication::translate("Lab8Class", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        copyButton->setText(QCoreApplication::translate("Lab8Class", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Lab8Class", "C++", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Lab8Class", "ASM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab8Class: public Ui_Lab8Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB8_H
