#include "pch.h"
#include "conio.h"
#include "math.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Часть 1, Лабораторная работа №6, Вариант №5" << endl;

	const double b = 1.5, aN = 0.1, aK = 1.3;
	double da = 0.1, x, y, z;

	cout << "Задание a, шаг 0.1:" << endl;
	for (double a = aN; a <= aK; a += da)
	{
		x = tan(a) - a * b;
		y = b * cos(1.5*a);

		if (x < 2.5)
			z = sqrt(cos(2)*x + 2);
		else
			z = 3 * y - sin(8)*pow(x, 2);

		cout << "\ta=" << a << "; x=" << x << "; y=" << y << "; z=" << z << endl;
	}

	cout << endl << "Задание b, разбить интервал на 6 отрезков:" << endl;
	da = (aK - aN) / 6;
	for (double a = aN; a <= aK; a += da)
	{
		x = tan(a) - a * b;
		y = b * cos(1.5*a);

		if (x < 2.5)
			z = sqrt(cos(2)*x + 2);
		else
			z = 3 * y - sin(8)*pow(x, 2);

		cout << "\ta=" << a << "; x=" << x << "; y=" << y << "; z=" << z << endl;
	}
	_getch();
}