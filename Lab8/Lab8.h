#pragma once

#include <QtWidgets/QWidget>
#include "ui_Lab8.h"
#include <qfiledialog.h>
#include <qtextstream.h>
#include <qmessagebox.h>
#include <qregexp.h>

class Lab8 : public QWidget
{
    Q_OBJECT

public:
    Lab8(QWidget *parent = nullptr);
    ~Lab8();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
private:
    Ui::Lab8Class ui;
};
