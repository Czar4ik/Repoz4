//������ � ������, �������������, ������� ����������, ������, ����, ����.

#pragma once
#include"rectangle.h"
#include "Button.h"

class Window
{
	Rectangle *rectangle;
public:
	int b = 11;

	Window();
	~Window();

	void setSize(int);
	void getSize();


};