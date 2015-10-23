#include "stdafx.h"
#include <iostream>
#include "Rectangle.h"

using namespace std;

void Rectangle::show()	//метод просмотра
{
	Figura *p = head;
	cout << "\nList:" << endl;
	while (p)
	{
		p->getName();
		p->getWidth();
		if (p->next != NULL)
		{
			cout << "";
		}
		p = p->next;
	}
	cout << endl;
}

void Rectangle::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Figura *q = head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			}
			q->next = this;
			this->next = NULL;
		}
	}
}

Rectangle::Rectangle(int w,  char * name)
{
	cout << "Constr rec.\n";
	this->name = name;
	this->width = w;
}

Rectangle::~Rectangle()
{
	cout << "Destr rec.\n";
}

void Rectangle::setName(char *name)
{
	this->name = name;
}

void Rectangle::setWidth(int w)
{
	this->width = w;
}

void Rectangle::getName() const
{
	cout << "Name: " << this->name << endl;
}

void Rectangle::getWidth() const
{
	cout << "Width = " << this->width << endl;
}