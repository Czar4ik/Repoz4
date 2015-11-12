#pragma once
#include <stdio.h>
#include <string.h>
using namespace std;
class Element
{
public:

	Element()
	{
		this->name = name;
	};

	Element(char *name)
	{
		this->name = name;
	}


	virtual ~Element()
	{}

	virtual char* getName() = 0;
	virtual int getPlosh() = 0;

	Element *next;
protected: 
	char *name;
	char *plosh;
};
