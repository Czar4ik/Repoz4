#include "stdafx.h"
#include<iostream>
#include"Interface.h"
using namespace std;

interface::interface()
{
	cout << "Constr interf." << endl;
}

interface::~interface()
{
	cout << "Destr interf." << endl;
}
