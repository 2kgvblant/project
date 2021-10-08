#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
using namespace std;
int menu();
string case1();
string case2();
string case3();
string case4();
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");
	int p; //Переменная для функции если
	cout << "Привет, как тебя зовут?" << endl;
	string n;
	cin >> n;
	system("cls");
	cout << "Привет " << n << ", меня зовут Calculator 2.0 by Valera, приятно познакомиться! " << endl;
	do {
	cout << "Ты готов?" << endl;
	string l;
	cin >> l;
		if (l == "нет" || l == "Нет" || l == "НЕТ") { //Если нет
			system("cls");
			cout << "Может быть все таки готов?)" << endl;
			cin >> l;
			system("cls");
			if (l == "нет" || l == "Нет" || l == "НЕТ")
				continue;
		}
		if (l == "да" || l == "Да" || l == "ДА") {//Если да то продолжим
			system("cls");
			break;
		}
		else
		{
			system("cls");
			cout << "Введите да или нет" << endl;
		}
	} while (true);
	string k;
	do
	{
		p = menu();	
		switch (p)
		{
		case 0:
		{
			system("cls");
			cout << "Goodbye :)" << endl;
			_sleep(5000);
			exit(1);
		}
		case 1:
		{
			k = "нет";
			while (k == "нет") {
				k = case1();
			}
			system("cls");
			break;
		}
		case 2:
		{
			k = "нет";
			while (k == "нет") {
				k = case2();
			}
			system("cls");
			break;
		}
		case 3:
		{
			k = "нет";
			while (k == "нет") {
				k = case3();
			}
			system("cls");
			break;;
		}
		case 4:
		{
			k = "нет";
			while (k == "нет")
			{
				k = case4();
			}
			system("cls");
			break;
		}
		}
	} while (k == "да");
}