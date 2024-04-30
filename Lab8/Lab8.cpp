#include "Lab8.h"

extern "C" char caesar(char symbol, char key);
extern "C" char encrypt_vigenere(char symbol, char key);
extern "C" char decrypt_vigenere(char symbol, char key);
extern "C" char atbash(char symbol);

Lab8::Lab8(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    QRegExp regex("[a-z]+");
    QRegExpValidator* validator = new QRegExpValidator(regex);
    ui.lineEdit->setValidator(validator);
    ui.radioButton->setChecked(true);
    ui.spinBox->setToolTip("Caesar cipher key");
    ui.lineEdit->setToolTip("Vigenere cipher key");
}

Lab8::~Lab8()
{}

void Lab8::on_pushButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this);
    QFile file(file_name);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        ui.textBrowser->clear();
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            ui.textBrowser->append(line);
        }
        file.close();
    }
}

void Lab8::on_pushButton_2_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this);
    QFile file(file_name);
    QString text = ui.textBrowser_2->toPlainText();
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);
        out << text;
        file.close();
    }
}

void Lab8::on_pushButton_3_clicked()
{
    ui.textBrowser_2->clear();
    QString text = ui.textBrowser->toPlainText();
    if (ui.radioButton->isChecked())
    {
        for (auto c : text)
        {
            ui.textBrowser_2->insertPlainText(QString(caesar(c.toLatin1(), ui.spinBox->value())));
        }
    }
    else if (ui.radioButton_2->isChecked())
    {
        QString key = ui.lineEdit->text();
        if (key == "")
        {
            QMessageBox msg;
            msg.setWindowTitle("Error");
            msg.setText("Key word can not be empty");
            msg.exec();
            return;
        }
        char value = 0;
        for (int i = 0, j = i; i < text.length(); i++)
        {
            value = encrypt_vigenere(text[i].toLatin1(), key[j % key.length()].toLatin1());
            ui.textBrowser_2->insertPlainText(QString(value));
            if (value >= 'A' && value <= 'Z' || value >= 'a' && value <= 'z')
                j++;
        }
    }
    else if (ui.radioButton_3->isChecked())
    {
        for (auto c : text)
        {
            ui.textBrowser_2->insertPlainText(QString(atbash(c.toLatin1())));
        }
    }
}

void Lab8::on_pushButton_4_clicked()
{
    ui.textBrowser_2->clear();
    QString text = ui.textBrowser->toPlainText();
    if (ui.radioButton->isChecked())
    {
        for (auto c : text)
        {
            ui.textBrowser_2->insertPlainText(QString(caesar(c.toLatin1(), -ui.spinBox->value())));
        }
    }
    else if (ui.radioButton_2->isChecked())
    {
        QString key = ui.lineEdit->text();
        if (key == "")
        {
            QMessageBox msg;
            msg.setWindowTitle("Error");
            msg.setText("Key word can not be empty");
            msg.exec();
        }
        char value = 0;
        for (int i = 0, j = i; i < text.length(); i++)
        {
            value = decrypt_vigenere(text[i].toLatin1(), key[j % key.length()].toLatin1());
            ui.textBrowser_2->insertPlainText(QString(value));
            if (value >= 'A' && value <= 'Z' || value >= 'a' && value <= 'z')
                j++;
        }
    }
    else if (ui.radioButton_3->isChecked())
    {
        for (auto c : text)
        {
            ui.textBrowser_2->insertPlainText(QString(atbash(c.toLatin1())));
        }
    }
}