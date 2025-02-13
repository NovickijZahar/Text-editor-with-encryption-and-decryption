#pragma once

#include <QtWidgets/QWidget>
#include <QMessageBox>
#include <QClipboard>
#include "ui_Lab8.h"
#include "CEncryption.h"
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
    void on_openFileButton_clicked();
    void on_saveToFileButton_clicked();
    void on_encryptButton_clicked();
    void on_decryptButton_clicked();
    void on_copyButton_clicked();
    void on_pasteButton_clicked();
    void on_clearButton_clicked();
private:
    Ui::Lab8Class ui;
    CEncryption cencr;
};
