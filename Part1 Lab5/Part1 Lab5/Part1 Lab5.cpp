#include "pch.h"
#include "conio.h"
#include "math.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double a = 0.1, b = 0.5, x, y, z;

	cout << "Часть 1, Лабораторная работа №5, Вариант №5" << endl;

	cout << "Задание №1" << endl << "a=" << a << " b=" << b;
	x = tan(a) - a * b;
	y = b * cos(1.5*a);
	if (x < 2.5)
		z = sqrt(pow(cos(x), 2) + 2);
	else
		z = 3 * y - sin(8)*pow(x, 2);

	cout << " x=" << x << " y=" << y << " z=" << z << endl;

	a = 1.3;
	b = 1.9;
	cout << endl << "Задание №2" << endl << "a=" << a << " b=" << b;
	x = tan(a) - a * b;
	y = b * cos(1.5*a);
	if (x < 2.5)
		z = sqrt(pow(cos(x), 2) + 2);
	else
		z = 3 * y - sin(8)*pow(x, 2);

	cout << " x=" << x << " y=" << y << " z=" << z << endl;
	_getch();
}