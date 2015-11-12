#pragma once
#include "Element upravlenia.h"
#include "iostream"
using namespace std;

class Window :
	public Element
{

public:
	Window()
	{}

	Window(char* name, int plosh) :Element(name)
	{
		this->plosh = plosh;
	};

	char* getName()
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

	void Window::vlozh()
	{
		cout << "Window level: ";
		cout << this->num << endl;
	}
protected:
	int num = 3;
	int plosh;
};