#include "stdafx.h"
#include<iostream>
#include"Button.h"

using namespace std;

void Button::setText(char *text)
{
	this->text = text;
};


void Button::getText() const
{
	cout << this->text;
	cout << endl;
};


Button::Button(char *text)
{
	std::cout << "Start constr button\n";
	this->text = text;
	cout << endl;
};

Button::~Button()
{
	std::cout << "Start destr button\n";
};