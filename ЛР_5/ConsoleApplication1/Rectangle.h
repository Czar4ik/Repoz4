//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#pragma once
#include "Figura.h"
using namespace std;

class Rectangle
	:public Figura
{
public:
	Rectangle(int w = 25, char* name = "Rectangle");
	~Rectangle();

	void setName(char *name);
	char* getName() const;

	void setWidth(int);
	int getWidth();

	static void show();
	void add();
	Rectangle *next;
private:
	int width;
	char *name;

};