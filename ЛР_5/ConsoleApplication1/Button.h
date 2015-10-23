// лассы Ц ‘игура, ѕр€моугольник, Ёлемент управлени€,  нопка, ћеню, ќкно.

#pragma once
#include"Element Upravlenia.h"
using namespace std;
class Button
	:public Element
{
public:
	Button(char *text = " нопка");
	~Button();

	void setText(char *text);
	void getText() const;


private:
	char *text;
};
