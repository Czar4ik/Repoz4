//Классы – Фигура, Прямоугольник, Элемент управления, Кнопка, Меню, Окно.

#include "stdafx.h"
#include "iostream"
#include "Button.h"
#include "Figura.h"
#include "Rectangle.h"
#include "Element upravlenia.h"
#include "Window.h"
#include "Interface.h"

using namespace std;
	Figura *Figura::head = NULL;
	Element *Element::head = NULL;

int main()
{
	interface but[5];
	setlocale(LC_ALL, "Rus");

	//Rectangle Rec1(1, "Rec1");
	//Rec1.add();
	//Rectangle Rec2(2, "Rec2");
	//Rec2.add();
	//Rectangle Rec3(3, "Rec3");
	//Rec3.add();

	//Rectangle::show();

	cout << endl << endl;

	//Button Butt1; 
	//Butt1.getText();
	//Button Butt2("Click");	
	//Butt2.getText();
	//Button Butt3("DoubClick");
	//Butt3.getText();

	cout << "------------------------------------------" << endl;
	but[0].setText ( "Button 1 Double");
	but[0].getText();
	but[1].setText( "Button 2 Triple");
	but[1].getText();
	but[2].setText( "Button 3 Penta");
	but[2].getText();
	but[3].setName("Name1");
	but[3].getName();
	but[4].setWidth(20);
	but[4].getWidth();

	cout << "------------------------------------------" << endl;
	cout << endl << endl;
}

