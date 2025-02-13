#include "CEncryption.h"

CEncryption::CEncryption() {
	int index = 0;
	for (wchar_t c = L'a'; c <= L'z'; ++c) {
		char_to_number.insert(c, index);
		number_to_char.insert(index, c);
		index++;
	}
	for (wchar_t c = L'à'; c <= L'ÿ'; ++c) {
		char_to_number.insert(c, index);
		number_to_char.insert(index, c);
		index++;
	}
}


QString CEncryption::atbash(QString source_text)
{
	QString res;
	for (auto c : source_text) 
	{
		ushort unicode = c.unicode();
		if (unicode >= L'a' && unicode <= L'z')
			res.append(L'z' - unicode + 'a');
		else if (unicode >= L'A' && unicode <= L'Z')
			res.append(L'Z' - unicode + L'A');
		else if (unicode >= L'à' && unicode <= L'ÿ')
			res.append(L'ÿ' - unicode + L'à');
		else if (unicode >= L'À' && unicode <= L'ß')
			res.append(L'ß' - unicode + L'À');
		else
			res.append(unicode);
	}
	return res;
}

QString CEncryption::caesar(QString source_text, char key)
{
	QString res;
	for (auto c : source_text) 
	{
		char temp_key = key;
		ushort unicode = c.unicode();
		if (unicode >= L'a' && unicode <= L'z') {
			temp_key %= 26;
			if (temp_key < 0) temp_key = temp_key % 26 + 26;
			res.append((unicode - L'a' + temp_key) % 26 + L'a');
		}
		else if (unicode >= L'A' && unicode <= L'Z') {
			temp_key %= 26;
			if (temp_key < 0) temp_key = temp_key % 26 + 26;
			res.append((unicode - L'A' + temp_key) % 26 + L'A');
		}
		else if (unicode >= L'à' && unicode <= L'ÿ') {
			temp_key %= 32;
			if (temp_key < 0) temp_key = temp_key % 32 + 32;
			res.append((unicode - L'à' + temp_key) % 32 + L'à');
		}
		else if (unicode >= L'À' && unicode <= L'ß') {
			char temp_key = key;
			temp_key %= 32;
			if (temp_key < 0) temp_key = temp_key % 32 + 32;
			res.append((unicode - L'À' + temp_key) % 32 + L'À');
		}
		else {
			res.append(unicode);
		}
	}
	return res;
}

QString CEncryption::encrypt_vigenere(QString source_text, QString key)
{
	QString res;
	for (int i = 0, j = i; i < source_text.length(); i++)
	{
		ushort unicode = source_text[i].unicode();
		if (!(unicode >= L'a' && unicode <= L'z' ||
			unicode >= L'A' && unicode <= L'Z' ||
			unicode >= L'à' && unicode <= L'ÿ' ||
			unicode >= L'À' && unicode <= L'ß')) 
		{
			res.append(unicode);
			continue;
		}
		bool isUpper = QChar::isUpper(unicode);
		QChar r(number_to_char[(char_to_number[QChar::toLower(unicode)] + char_to_number[key[j % key.length()].unicode()]) % number_to_char.size()]);
		if (isUpper) r = r.toUpper();
		res.append(r);
		j++;
	}
	return res;
}

QString CEncryption::decrypt_vigenere(QString source_text, QString key)
{
	QString res;
	for (int i = 0, j = i; i < source_text.length(); i++)
	{
		ushort unicode = source_text[i].unicode();
		if (!(unicode >= L'a' && unicode <= L'z' ||
			unicode >= L'A' && unicode <= L'Z' ||
			unicode >= L'à' && unicode <= L'ÿ' ||
			unicode >= L'À' && unicode <= L'ß'))
		{
			res.append(unicode);
			continue;
		}
		bool isUpper = QChar::isUpper(unicode);
		QChar r(number_to_char[(char_to_number[QChar::toLower(unicode)] - char_to_number[key[j % key.length()].unicode()] + number_to_char.size()) % number_to_char.size()]);
		if (isUpper) r = r.toUpper();
		res.append(r);
		j++;
	}
	return res;
}
