#include "pch.h"
#include "conio.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Часть 1, Лабораторная работа №8, Вариант №5" << endl;

	int N, M; //Количество строк и столбцов

	//Ввод количества строк и столбцов
	cout << "Количество строк: ";
	cin >> N;
	cout << "Количество столбцов: ";
	cin >> M;

	//Создание двумерного динамического массива
	int **B = new int*[N];
	for (int i = 0; i < N; i++)
		B[i] = new int[M];

	//Инициализации начальных данных динамического двумерного массива
	for (int i = 0; i < N; i++)
		for (int y = 0; y < M; y++)
			B[i][y] = rand() % 10;

	//Вывод двумерного динамического массива на экран
	cout << "Динамический двумерный массив B[" << N << "][" << M << "]:" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int y = 0; y < M; y++)
			cout << B[i][y] << " ";
		
		cout << endl;
	}

	//Сортировка двумерного динамического массива слева на право
	bool sort;
	for (int i = 0; i < N; i++)
	{
		do
		{
			sort = false;
			for (int y = 1; y < M; y++)
			{
				if (B[i][y] < B[i][y - 1])
				{
					int value = B[i][y - 1];
					B[i][y - 1] = B[i][y];
					B[i][y] = value;
					sort = true;
				}
				else
					continue;
			}
		} while (sort == true);
	}

	//Сортировка двумерного динамического массива сверху вниз
	for (int i = 0; i < M; i++)
	{
		do
		{
			sort = false;
			for (int y = 1; y < N; y++)
			{
				if (B[y][i] < B[y - 1][i])
				{
					int value = B[y - 1][i];
					B[y - 1][i] = B[y][i];
					B[y][i] = value;
					sort = true;
				}
				else
					continue;
			}
		} while (sort == true);
	}

	//Вывод двумерного динамического массива на экран
	cout << "Динамический двумерный массив B[" << N << "][" << M << "]:" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int y = 0; y < M; y++)
			cout << B[i][y] << " ";

		cout << endl;
	}

	_getch();
}