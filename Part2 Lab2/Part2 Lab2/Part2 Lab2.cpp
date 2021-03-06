#include "pch.h"
#include "conio.h"
#include <iostream>

using namespace std;

void Initialization(int**, int, int); //Функция инициализации начальных данных динамического двумерного массива
void Print(int**, int, int); //Функция для вывода двумерного динамического массива на экран
void Change(int**, int, int); //Функция для вывода количества не положительных элементов в каждой строке матрицы

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Часть 2, Лабораторная работа №2, Вариант №5" << endl;
	int N = rand() % 25, M = rand() % 25; //Количество строк и столбцов

	//Создание двумерного динамического массива
	int **F = new int*[N];
	for (int i = 0; i < M; i++)
		F[i] = new int[M];

	Initialization(F, N, M);
	cout << "Динамический двумерный массив:" << endl;
	Print(F, N, M);

	Change(F, N, M);

	_getch();
}

void Initialization(int **F, int N, int M)
{
	for (int i = 0; i < N; i++)
		for (int y = 0; y < M; y++)
			F[i][y] = (rand() % 10) - 3;
}

void Print(int **F, int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int y = 0; y < M; y++)
			cout << F[i][y] << " ";
		cout << endl;
	}
}

void Change(int **F, int N, int M)
{
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		int count = 0;
		for (int y = 0; y < M; y++)
		{
			if (F[i][y] < 1)
				count++;
			else
				continue;
		}
		cout << "Количество не положительных елементов в строке [" << i << "]: " << count << endl;
	}
}