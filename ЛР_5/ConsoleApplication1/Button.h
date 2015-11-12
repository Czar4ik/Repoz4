#pragma once
#include "Element upravlenia.h"
#include "iostream"
using namespace std;
class Button :
	public Element
{

public:
	Button()
	{}

	Button(char* name, int plosh) :Element(name)
	{
		this->plosh = plosh;
	};


	char * getName()
	{
		return name;
	};
	
	int getPlosh()
	{
		//cout << this->cost;
		return plosh;
	};

	void Show()
	{
		cout << this->name;
	};

	void Button::vlozh()
	{
		cout << "Button level: ";
		cout << this->num << endl;
	}

protected:
	int num = 3;
	int plosh;
};