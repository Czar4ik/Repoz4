#include "stdafx.h"
#include <iostream>
#include "Window.h"

using namespace std;

void Window::setSize(int w)
{
	rectangle->setWidth(w);
}

void Window::getSize()
{
	cout << "Width window: "; 
	rectangle->getWidth();
	cout << endl;
}

Window::Window()
{
	std::cout << "Constr window.\n";
}

Window::~Window()
{
	std::cout << "Destr window.\n";
}