/*������� ��������� ������������ ��������.
����������� ����� ���� ������,
���� ��������� ������ �����������. 
��������� ������� ���������� ����� � ����*/
#pragma once
#include "iostream"
#include "Rectangle.h"
#include "Window.h"
using namespace std;

class interface
	:public Button, public Rectangle, public Window
{
public:
	interface();
	~interface();
};