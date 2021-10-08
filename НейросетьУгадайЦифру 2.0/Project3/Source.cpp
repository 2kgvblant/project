#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <ctime>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");
	int a;
	int i;
	int p = 0;
	int m = 0;
	do 
	{
		int max;
		cout << "Выберите максимальное число" << endl;
		cin >> max;
		srand(time(0));
		a = (rand() % max);
		if (a == 0)
		{
			a++;
		}
		system("cls");
		do {
			++p;
			cout << "Компьютер...Я думаю что это число " << endl;
			i = m + (rand() % (max - m));
			cout << i << endl;
			cout << a << endl;

			if (i > a)
			{
				cout << "Загаданное число меньше" << endl;
				max = i;
				continue;
			}
			else if (a > i)
			{
				cout << "Загаданное число больше" << endl;
				m = i;
				continue;
			}
			if (i == a)
				break;
		} while (true);
				cout << "Поздравляю, вы угадали число!" << endl;
			cout << "Загаданное число... " << a << endl;
			cout << "Количество попыток... " << p << endl;
			p = 0;
			m = 0;
			system("PAUSE");
			system("cls");
	} while (true);
}