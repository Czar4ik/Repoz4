#pragma once
#include"Element Upravlenia.h"

class Menu
	:public Element
{
public:
	void Menu::setNameMenu(char *text)
	{
		this->text = text;
	};


	void Menu::getNameMenu() const
	{
		cout << this->text;
		cout << endl;
	};


	void Menu::setText(char *text)
	{
		this->text = text;
	};


	void Menu::getText() const
	{
		cout << this->text;
		cout << endl;
	};


	Menu::Menu(char *text)
	{
		std::cout << "Start constr menu\n";
		this->text = text;
		cout << endl;
	};

	Menu::~Menu()
	{
		std::cout << "Start destr menu\n";
	};

private:

	char *text;
};
