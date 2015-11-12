//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#include "stdafx.h"
#include "iostream"
#include "Button.h"
#include "Element upravlenia.h"
#include "Window.h"
#include "Interface.h"
#include "Menu.h"


using namespace std;
Interface object;


void main()
{
	setlocale(LC_CTYPE, "Russian");

	Button *First = new Button("But1", -20);
	object.insert(First);

	Button *Second = new Button("But2", -30);
	object.insert(Second);

	Window *Third = new Window("Window", 100);
	object.insert(Third);
	cout << "Общая площадь: " << object.plosh() << "\n";
	object.find();

	cout << endl;
	Interface num;	
	Button num1;
	Window num2;

	num.vlozh();
	num1.vlozh();
	num2.vlozh();
}

