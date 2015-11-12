//������ � ������, �������������, ������� ����������, ������, ����, ����.

#pragma once

class Figura
{
public:
	Figura *next;

	Figura();

	virtual void setName(char *name) = 0;
	virtual char* getName() const = 0;

	virtual void setWidth(int) = 0;
	virtual void getWidth() const = 0;

	virtual ~Figura(void);

protected:
	static Figura *head;
};
