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
	int b;
	int p = 0;
	int max;
	do 
	{
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
			cout << "������� ���� �����" << endl;
			cin >> b;
			++p;
			system("cls");
			if (b > a)
			{
				cout << "���������� ����� ������" << endl;
				continue;
			}
			else if (a > b)
			{
				cout << "���������� ����� ������" << endl;
				continue;
			}
			if (b == a)
				break;
		} while (true);
				cout << "����������, �� ������� �����!" << endl;
			cout << "���������� �����... " << a << endl;
			cout << "���������� �������... " << p << endl;
			p = 0;
			system("PAUSE");
			system("cls");
	} while (true);
}