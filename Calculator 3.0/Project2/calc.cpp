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
	cout << "����������� ���������" << endl;
	cout << "    " << endl;
	cout << "������� a" << endl;
	cout << "a = ";
	cin >> a;
	system("cls");
	cout << "������� b" << endl;
	cout << "b = ";
	cin >> b;
	system("cls");
	y = a * b;
	cout << "    " << endl;
	cout << "  " << a << "*" << b << "=" << y << endl;
	cout << "   " << endl;
	cout << "������ ��������� � ����?" << endl;
	do
	{
		cout << "�� ��� ���?" << endl;
		cin >> u;
		system("cls");
		if (u == "��")
			return "��";
		if (u == "���")
			return "���";
	} while (u != "��" || u != "���");
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
	cout << "����������� ��������" << endl;
	cout << "    " << endl;
	cout << "������� a" << endl;
	cout << "a = ";
	cin >> a;
	system("cls");
	cout << "������� b" << endl;
	cout << "b = ";
	cin >> b;
	system("cls");
	y = a + b;
	cout << "    " << endl;
	cout << "  " << a << "+" << b << "=" << y << endl;
	cout << "   " << endl;
	cout << "������ ��������� � ����?" << endl;
	do
	{
		cout << "�� ��� ���?" << endl;
		cin >> u;
		system("cls");
		if (u == "��")
			return "��";
		if (u == "���")
			return "���";
	} while (u != "��" || u != "���");
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
	cout << "����������� �������" << endl;
	cout << "    " << endl;
	cout << "������� a" << endl;
	cout << "a = ";
	cin >> a;
	system("cls");
	cout << "������� b" << endl;
	cout << "b = ";
	cin >> b;
	system("cls");
	y = a / b;
	cout << "    " << endl;
	cout << "  " << a << ":" << b << "=" << y << endl;
	cout << "   " << endl;
	cout << "������ ��������� � ����?" << endl;
	do
	{
		cout << "�� ��� ���?" << endl;
		cin >> u;
		system("cls");
		if (u == "��")
			return "��";
		if (u == "���")
			return "���";
	} while (u != "��" || u != "���");
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
	cout << "����������� ���������" << endl;
	cout << "    " << endl;
	cout << "������� a" << endl;
	cout << "a = ";
	cin >> a;
	system("cls");
	cout << "������� b" << endl;
	cout << "b = ";
	cin >> b;
	system("cls");
	y = a - b;
	cout << "    " << endl;
	cout << "  " << a << "-" << b << "=" << y << endl;
	cout << "   " << endl;
	cout << "������ ��������� � ����?" << endl;
	do
	{
		cout << "�� ��� ���?" << endl;
		cin >> u;
		system("cls");
		if (u == "��")
			return "��";
		if (u == "���")
			return "���";
	} while (u != "��" || u != "���");
}