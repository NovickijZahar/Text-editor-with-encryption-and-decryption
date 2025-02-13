#include <QString>
#include <QMap>

#pragma once
class CEncryption
{
public:
	CEncryption();
	QString atbash(QString source_text);
	QString caesar(QString source_text, char key);
	QString encrypt_vigenere(QString source_text, QString key);
	QString decrypt_vigenere(QString source_text, QString key);
private:
	QMap<ushort, ushort> char_to_number;
	QMap<ushort, ushort> number_to_char;
};

