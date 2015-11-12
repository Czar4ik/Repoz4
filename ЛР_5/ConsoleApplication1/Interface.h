/*Создать Интерфейс программного средства.
Реализовать поиск всех кнопок,
меню заданного уровня вложенности. 
Расчитать полщадь свободного места в окне*/

#pragma once
#include "iostream"
#include "Button.h"
#include "Window.h"
using namespace std;
#pragma once

class Element;
class Interface
{
public:

	int plosh();
	void find();
	void insert(Element*);
	void deleteEl();
	void vlozh();
	Interface* next;

private:
	Element* begin;
	int num = 1;
};



void Interface::vlozh()
{
	cout << "Interface level: ";
	cout << this->num << endl;
}



void Interface::insert(Element *p)
{
	Element *r;
	r = begin;
	begin = p;
	p->next = r;
}



int Interface::plosh()
{
	int sum = 0;
	Element* t;
	t = begin;
	while (t)
	{

		sum = sum + t->getPlosh();
		t->getName(); 
		cout << "\n";
		t = t->next;
	}
	return sum;
}


void Interface::find()
{
	char name[256];
	Element * t;
	cout << "Write name: ";
	cin >> name;
	t = begin;
	while (t)
	{
		if (strcmp(name, t->getName())) {
			cout << "Error, don't find." << endl;
		}
		else cout<<t->getName();
		
		t = t->next;
	}
}


void Interface::deleteEl()
{
	Element* t, *old;
	t = begin;
	while (t)
	{
		old = t;
		t = t->next;
		delete old;
	}
	begin = 0;
}