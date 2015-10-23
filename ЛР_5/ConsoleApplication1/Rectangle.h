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
	void getName() const;

	void setWidth(int);
	void getWidth() const;

	static void show();
	void add();

private:
	int width;
	char *name;
};