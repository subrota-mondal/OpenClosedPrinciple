// OpenClosedPrincipleTranslatorWithOCP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

class Language {
public:
	virtual void translate(string text) = 0;
};

class Spanish: public Language {
public:
	void translate(string text = "Hello") {
		cout << "English \"" << text.c_str() << "\" is \"Hola\" in Spanish" << endl;
	}
};

class Chinese: public Language {
public:
	void translate(string text = "Hello") {
		cout << "English \"" << text.c_str() << "\" is \"Ni hao\" in Chinese" << endl;
	}
};

class Translator {
public:
	void translateTo(Language * lang, string text = "Hello") {
		lang->translate(text);
	}
};

int main()
{
	string text = "Hello";
	Language * lang;
	Translator translator;

	lang = new Spanish();
	translator.translateTo(lang, text);

	lang = new Chinese();
	translator.translateTo(lang, text);

	return 0;
}


/*
class Translator {
	Language * lang;
public:
	Translator() {}
	Translator(Language *lg) {
		lang = lg;
	}
	void translateTo(string text = "Hello") {
		this->lang->translate(text);
	}
};



int main()
{
	string text = "Hello";
	Language * lang;
	Translator translator;

	lang = new Spanish();
	translator = lang;
	translator.translateTo(text);

	lang = new Chinese();
	translator = lang;
	translator.translateTo(text);
	
	return 0;
}

*/