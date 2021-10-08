#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
using namespace std;
int menu()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");
	int x;
	cout << "    МЕНЮ" << endl;
	cout << "    " << endl;
	cout << "Сделай выбор:" << endl;
	cout << "    " << endl;
	cout << " 1 - a * b" << endl;
	cout << " 2 - a + b" << endl;
	cout << " 3 - a : b" << endl;
	cout << " 4 - a - b" << endl;
	cout << "    " << endl;
	cout << " 0 - Выйти" << endl;
	cout << " "; cin >> x;
	return x;
}