// CFeet.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class CFeet
{
private:
	int feet;
	int inches;
	int check();
public:
	CFeet();
	CFeet(int f, int c);
	void setData(int f, int c);
	void displayData();
	CFeet operator +(CFeet &ot);

};
CFeet CFeet::operator+(CFeet &ot)
{
	CFeet od;
	od.setData(feet + ot.feet, inches + ot.inches);
	return od;
}
CFeet::CFeet()
{

}
CFeet::CFeet(int f, int c)
{
	feet = f;
	inches = c;
}
void CFeet::setData(int f, int c)
{
	//cin >> f>> c;
	feet = f;
	inches = c;
	check();

}
void CFeet::displayData()
{

	cout << "feet=" << feet << "inches=" << inches << endl;
	
}
int CFeet::check()
{
	while (inches >= 12)

	{
		inches -= 12;
		feet++;

	}
	return feet;
}
int main()
{
	CFeet fc(13,13),fc2(14,14);
	fc =fc+ fc2;
	fc.displayData();
    return 0;
}

