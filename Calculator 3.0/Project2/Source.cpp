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
	int p; //���������� ��� ������� ����
	cout << "������, ��� ���� �����?" << endl;
	string n;
	cin >> n;
	system("cls");
	cout << "������ " << n << ", ���� ����� Calculator 2.0 by Valera, ������� �������������! " << endl;
	do {
	cout << "�� �����?" << endl;
	string l;
	cin >> l;
		if (l == "���" || l == "���" || l == "���") { //���� ���
			system("cls");
			cout << "����� ���� ��� ���� �����?)" << endl;
			cin >> l;
			system("cls");
			if (l == "���" || l == "���" || l == "���")
				continue;
		}
		if (l == "��" || l == "��" || l == "��") {//���� �� �� ���������
			system("cls");
			break;
		}
		else
		{
			system("cls");
			cout << "������� �� ��� ���" << endl;
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
			k = "���";
			while (k == "���") {
				k = case1();
			}
			system("cls");
			break;
		}
		case 2:
		{
			k = "���";
			while (k == "���") {
				k = case2();
			}
			system("cls");
			break;
		}
		case 3:
		{
			k = "���";
			while (k == "���") {
				k = case3();
			}
			system("cls");
			break;;
		}
		case 4:
		{
			k = "���";
			while (k == "���")
			{
				k = case4();
			}
			system("cls");
			break;
		}
		}
	} while (k == "��");
}