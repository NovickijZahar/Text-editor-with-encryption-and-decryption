#include "Lab8.h"
#include "CEncryption.h"

extern "C" char caesar(char symbol, char key);
extern "C" char encrypt_vigenere(char symbol, char key);
extern "C" char decrypt_vigenere(char symbol, char key);
extern "C" char atbash(char symbol);

Lab8::Lab8(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    QRegExp regex(QString::fromWCharArray(L"[a-zа-я]+"));
    QRegExpValidator* validator = new QRegExpValidator(regex);
    ui.lineEdit->setValidator(validator);
    ui.radioButton->setChecked(true);
    ui.radioButton_4->setChecked(true);
    ui.spinBox->setToolTip(QString::fromWCharArray(L"Ключ для шифра Цезаря"));
    ui.lineEdit->setToolTip(QString::fromWCharArray(L"Ключ для шифра Виженера"));
}

Lab8::~Lab8()
{}

void Lab8::on_openFileButton_clicked()
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

void Lab8::on_saveToFileButton_clicked()
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
    QMessageBox msg;
    msg.setWindowTitle(QString::fromWCharArray(L"Информация"));
    msg.setIcon(QMessageBox::Information);
    msg.setText(QString::fromWCharArray(L"Зашифрованное сообщение было успешно загружено в файл"));
    msg.exec();
}


void Lab8::on_encryptButton_clicked()
{
    ui.textBrowser_2->clear();
    QString text = ui.textBrowser->toPlainText();
    if (ui.radioButton->isChecked())
    {
        char key = ui.spinBox->value();
        if (ui.radioButton_4->isChecked())
        {
            ui.textBrowser_2->setText(cencr.caesar(text, key));
        }
        else 
        {
            for (auto c : text)
            {
                ui.textBrowser_2->insertPlainText(QString(caesar(c.toLatin1(), key)));
            }
        }
    }
    else if (ui.radioButton_2->isChecked())
    {
        QString key = ui.lineEdit->text();
        if (key == "")
        {
            QMessageBox msg;
            msg.setWindowTitle(QString::fromWCharArray(L"Ошибка"));
            msg.setIcon(QMessageBox::Critical);
            msg.setText(QString::fromWCharArray(L"Ключ не может быть пустым"));
            msg.exec();
            return;
        }
        if (ui.radioButton_4->isChecked())
        {
            ui.textBrowser_2->setText(cencr.encrypt_vigenere(text, key));
        }
        else 
        {
            char value = 0;
            for (int i = 0, j = i; i < text.length(); i++)
            {
                value = encrypt_vigenere(text[i].toLatin1(), key[j % key.length()].toLatin1());
                ui.textBrowser_2->insertPlainText(QString(value));
                if (value >= 'A' && value <= 'Z' || value >= 'a' && value <= 'z')
                    j++;
            }
        }
    }
    else if (ui.radioButton_3->isChecked())
    {
        if (ui.radioButton_4->isChecked()) 
        {
            ui.textBrowser_2->setText(cencr.atbash(text));
        }
        else 
        {
            for (auto c : text)
            {

                ui.textBrowser_2->insertPlainText(QString(atbash(c.toLatin1())));
            }
        }
    }
}



void Lab8::on_decryptButton_clicked()
{
    ui.textBrowser_2->clear();
    QString text = ui.textBrowser->toPlainText();
    if (ui.radioButton->isChecked())
    {
        char key = ui.spinBox->value();
        if (ui.radioButton_4->isChecked()) 
        {
            ui.textBrowser_2->setText(cencr.caesar(text, -key));
        }
        else 
        {
            for (auto c : text)
            {
                ui.textBrowser_2->insertPlainText(QString(caesar(c.toLatin1(), -key)));
            }
        }
    }
    else if (ui.radioButton_2->isChecked())
    {
        QString key = ui.lineEdit->text();
        if (key == "")
        {
            QMessageBox msg;
            msg.setWindowTitle(QString::fromWCharArray(L"Ошибка"));
            msg.setIcon(QMessageBox::Critical);
            msg.setText(QString::fromWCharArray(L"Ключ не может быть пустым"));
            msg.exec();
        }
        if (ui.radioButton_4->isChecked())
        {
            ui.textBrowser_2->setText(cencr.decrypt_vigenere(text, key));
        }
        else 
        {
            char value = 0;
            for (int i = 0, j = i; i < text.length(); i++)
            {
                value = decrypt_vigenere(text[i].toLatin1(), key[j % key.length()].toLatin1());
                ui.textBrowser_2->insertPlainText(QString(value));
                if (value >= 'A' && value <= 'Z' || value >= 'a' && value <= 'z')
                    j++;
            }
        }
    }
    else if (ui.radioButton_3->isChecked())
    {
        if (ui.radioButton_4->isChecked())
        {
            ui.textBrowser_2->setText(cencr.atbash(text));
        }
        else 
        {
            for (auto c : text)
            {
                ui.textBrowser_2->insertPlainText(QString(atbash(c.toLatin1())));
            }
        }
    }
}


void Lab8::on_copyButton_clicked() 
{
    QClipboard* clipboard = QApplication::clipboard();
    clipboard->setText(ui.textBrowser_2->toPlainText());
    QMessageBox msg;
    msg.setWindowTitle(QString::fromWCharArray(L"Информация"));
    msg.setIcon(QMessageBox::Information);
    msg.setText(QString::fromWCharArray(L"Скопировано в буфер обмена"));
    msg.exec();
}


void Lab8::on_pasteButton_clicked()
{
    QClipboard* clipboard = QApplication::clipboard();
    ui.textBrowser->setText(clipboard->text());
}

void Lab8::on_clearButton_clicked()
{
    ui.textBrowser->clear();
    ui.textBrowser_2->clear();
}

void Lab8::on_radioButton_5_toggled(bool checked)
{
    if (checked) 
    {
        ui.lineEdit->clear();
        QRegExp regex(QString::fromWCharArray(L"[a-z]+"));
        QRegExpValidator* validator = new QRegExpValidator(regex);
        ui.lineEdit->setValidator(validator);
    }
    else 
    {
        QRegExp regex(QString::fromWCharArray(L"[a-zа-я]+"));
        QRegExpValidator* validator = new QRegExpValidator(regex);
        ui.lineEdit->setValidator(validator);
    }
}
