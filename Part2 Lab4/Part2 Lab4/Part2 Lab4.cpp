#include "pch.h"
#include "conio.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Часть 2, Лабораторная работа №4, Вариант №5" << endl;
	char str[] = "if(((f=fopen(fname,\"r\"))!=NULL) fseek(f,0,SEEK_SET);";
	cout << endl << "Начальная строка: " << str << endl;

	int index = (strchr(str, '(') - str + 1);
	memmove(str + index, str + index + 1, index);
	cout << "Модифицированая строка с удалённым символом '(': " << str << endl;

	index = (strchr(str, 'fn') - str + 3);
	char str2[100];
	strncpy_s(str2, str, index);
	strcat_s(str2, "ile");
	strcat_s(str2, &str[index]);
	cout << "Модифицированая строка с изменением с 'fname' на 'filename': " << str2 << endl;

	cout << "Разбиение строки по разделителю ',':" << endl;
	char *next = NULL;
	char* str3 = strtok_s(str2, ",", &next);
	while (str3 != NULL)
	{
		cout << "\t" << str3 << endl;
		str3 = strtok_s(NULL, ",", &next);
	}
	_getch();
}