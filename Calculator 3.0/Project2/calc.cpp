#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <vector>
#include <string>
using namespace std;
string case1()
{

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");
	int a;
	int b;
	int y;
	string u;
	system("cls");
	cout << "Выполняется умножение" << endl;
	cout << "    " << endl;
	cout << "Введите a" << endl;
	cout << "a = ";
	cin >> a;
	system("cls");
	cout << "Введите b" << endl;
	cout << "b = ";
	cin >> b;
	system("cls");
	y = a * b;
	cout << "    " << endl;
	cout << "  " << a << "*" << b << "=" << y << endl;
	cout << "   " << endl;
	cout << "Хотите вернуться в меню?" << endl;
	do
	{
		cout << "да или нет?" << endl;
		cin >> u;
		system("cls");
		if (u == "да")
			return "да";
		if (u == "нет")
			return "нет";
	} while (u != "да" || u != "нет");
}
string case2()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");
	int a;
	int b;
	int y;
	string u;
	system("cls");
	cout << "Выполняется сложение" << endl;
	cout << "    " << endl;
	cout << "Введите a" << endl;
	cout << "a = ";
	cin >> a;
	system("cls");
	cout << "Введите b" << endl;
	cout << "b = ";
	cin >> b;
	system("cls");
	y = a + b;
	cout << "    " << endl;
	cout << "  " << a << "+" << b << "=" << y << endl;
	cout << "   " << endl;
	cout << "Хотите вернуться в меню?" << endl;
	do
	{
		cout << "да или нет?" << endl;
		cin >> u;
		system("cls");
		if (u == "да")
			return "да";
		if (u == "нет")
			return "нет";
	} while (u != "да" || u != "нет");
}
string case3()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");
	double a;
	double b;
	double y;
	string u;
	system("cls");
	cout << "Выполняется деление" << endl;
	cout << "    " << endl;
	cout << "Введите a" << endl;
	cout << "a = ";
	cin >> a;
	system("cls");
	cout << "Введите b" << endl;
	cout << "b = ";
	cin >> b;
	system("cls");
	y = a / b;
	cout << "    " << endl;
	cout << "  " << a << ":" << b << "=" << y << endl;
	cout << "   " << endl;
	cout << "Хотите вернуться в меню?" << endl;
	do
	{
		cout << "да или нет?" << endl;
		cin >> u;
		system("cls");
		if (u == "да")
			return "да";
		if (u == "нет")
			return "нет";
	} while (u != "да" || u != "нет");
}
string case4()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");
	int a;
	int b;
	int y;
	string u;
	system("cls");
	cout << "Выполняется вычитание" << endl;
	cout << "    " << endl;
	cout << "Введите a" << endl;
	cout << "a = ";
	cin >> a;
	system("cls");
	cout << "Введите b" << endl;
	cout << "b = ";
	cin >> b;
	system("cls");
	y = a - b;
	cout << "    " << endl;
	cout << "  " << a << "-" << b << "=" << y << endl;
	cout << "   " << endl;
	cout << "Хотите вернуться в меню?" << endl;
	do
	{
		cout << "да или нет?" << endl;
		cin >> u;
		system("cls");
		if (u == "да")
			return "да";
		if (u == "нет")
			return "нет";
	} while (u != "да" || u != "нет");
}