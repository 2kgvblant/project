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
		cout << "�������� ������������ �����" << endl;
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
			cout << "���������...� ����� ��� ��� ����� " << endl;
			i = m + (rand() % (max - m));
			cout << i << endl;
			cout << a << endl;

			if (i > a)
			{
				cout << "���������� ����� ������" << endl;
				max = i;
				continue;
			}
			else if (a > i)
			{
				cout << "���������� ����� ������" << endl;
				m = i;
				continue;
			}
			if (i == a)
				break;
		} while (true);
				cout << "����������, �� ������� �����!" << endl;
			cout << "���������� �����... " << a << endl;
			cout << "���������� �������... " << p << endl;
			p = 0;
			m = 0;
			system("PAUSE");
			system("cls");
	} while (true);
}