// OpenClosedPrincipleTranslatorWoOCP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


class Spanish {
public:
	void translate(string text = "Hello") {
		cout << "English \"" << text.c_str() << "\" is \"Hola\" in Spanish" << endl;
	}
};

class Chinese {
public:
	void translate(string text = "Hello") {
		cout << "English \"" << text.c_str() << "\" is \"Ni hao\" in Chinese" << endl;
	}
};

class Bengali {
public:
	void translate(string text = "Hello") {
		cout << "English \"" << text.c_str() << "\" is \"Ohe\" in Bengali" << endl;
	}
};

class Translator {
	Spanish spanish;
	Chinese chinese;
	Bengali bengali;
public:
	Translator(Spanish sp, Chinese cn, Bengali bn) {
		spanish = sp;
		chinese = cn;
		bengali = bn;
	}

	void translateTo(string text = "Hello") {
		spanish.translate(text);
		chinese.translate(text);
		bengali.translate(text);
	}
};

int main()
{
	string text = "Hello";
	Spanish sp;
	Chinese cn;
	Bengali bn;

	Translator translator(sp, cn, bn);
	translator.translateTo(text);
	return 0;
}