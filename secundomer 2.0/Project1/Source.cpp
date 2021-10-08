#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");
	int n;
	string k;
	do
	{
		cout << "¬ведите количество секунд" << endl;
		cin >> n;
		system("cls");
		for (int x = n; x < n + 1 && x >= 1; x--)
		{
			cout << x << endl;
			_sleep(1000);
		}
		cout << "  " << endl;
		cout << "¬рем€ вышло" << endl;
		tryAgain:
		cout << "’отите продолжить" << endl;
	cin >> k;
	system("cls");
	} while (k == "да");
	if (k == "нет") {
		system("cls");
		cout << "Goodbye :)" << endl;
		_sleep(5000);
		exit(1);
	}
	else
	{
		cout << "¬ведите да или нет" << endl;
		goto tryAgain;
	}
}