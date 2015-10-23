//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#pragma once

class Element
{
public:
	Element *next;

	Element();
	virtual ~Element();

	virtual void setText(char *text) = 0;
	virtual void getText() const = 0;

protected:
	static Element *head;
};
