#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <vector>
#include "Mn.h"

using namespace std;
class vect
{
public:
	vector<string>task;
	vector<string>vipzad;
	vector<string>::iterator tsk;
	vector<string>::const_iterator iter;
};
class Spisok
{
public:
	Mn meen();
	vect baza;
	int y;
	void menu()
	{
		int a;
		cout << "\n1 -> �������� ������\n" << endl;
		cout << "2 -> ������ �����\n" << endl;
		cout << "3 -> ������ ����������� �����\n" << endl;
		cout << "4 -> ����� � ����\n" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			system("cls");
			add();
		case 2:
			system("cls");
			spis();
		case 3:
			system("cls");
			vspis();
		case 4:
			system("cls");

		}
	}
	void del()
	{
		for (int i = 0, n = 1; i < baza.task.size(); i++, n++)
		{
			cout << n << " -> " << baza.task[i] << endl;
		}
		cout << "\n�������� ����� ������\n" << endl;
		cin >> y;
		baza.task.erase((baza.task.begin() + y - 1));
		system("cls");
		cout << "\n������ �������\n" << endl;
		//_sleep(3000);
		spis();
	}
	void vzad()
	{
		for (int i = 0, n = 1; i < baza.task.size(); i++, n++)
		{
			cout << n << " -> " << baza.task[i] << endl;
		}
		cout << "\n�������� ����� ������\n" << endl;
		cin >> y;
		baza.vipzad.push_back(baza.task[y - 1]);
		baza.task.erase((baza.task.begin() + y - 1));
		system("cls");
		cout << "\n������ ���������\n" << endl;
		spis();
	}
	void vspis()
	{
		int men;
		if (baza.vipzad.size() == 0)
		{
			cout << "����� � ������ ���" << endl;
			system("PAUSE");
			menu();
		}
		cout << "\n������ ����������� �����\n" << endl;
		for (int i = 0, n = 1; i < baza.vipzad.size(); i++, n++)
		{
			cout << n << " -> " << baza.vipzad[i] << endl;
		}
		cout << "\n\n0 -> ����� � ����\n" << endl;
		cin >> men;
		system("cls");
		menu();
	}
	void red()
	{
		for (int i = 0, n = 1; i < baza.task.size(); i++, n++)
		{
			cout << n << " -> " << baza.task[i] << endl;
		}
		cout << "\n�������� ����� ������\n" << endl;
		cin >> y;
		baza.tsk = ((baza.task.begin() + y - 1));
		system("cls");
		cout << *baza.tsk << endl;
		cout << "\n������������� ��...\n" << endl;
		string red;
		cin.ignore();
		getline(cin, red);
		*baza.tsk = red;
		system("cls");
		cout << "\n�������!\n" << endl;
		system("PAUSE");
		system("cls");
		spis();
	}
	void add()
	{
		string zd;
		int n = 0;
		cout << "������� ������...\n" << endl;
		cin.ignore();
		getline(cin, zd);
		baza.task.push_back(zd);
		system("cls");
		cout << "������ ���������\n" << endl;
		//_sleep(3000);
		menu();
		return;
	}
	void spis()
	{
		if (baza.task.empty() == true)
		{
			cout << "����� � ������ ���" << endl;
			system("PAUSE");
			menu();
		}
		for (int i = 0, n = 1; i < baza.task.size(); i++, n++)
		{
			cout << n << " -> " << baza.task[i] << endl;
		}
		int a;
		cout << "\n\n\n1 -> ������� ������\n" << endl;
		cout << "2 -> ��������� ������\n" << endl;
		cout << "3 -> ������������� ������\n" << endl;
		cout << "4 -> ����� � ����\n" << endl;
		cin >> a;
		system("cls");
		switch (a)
		{
		case 1:
			del();
		case 2:
			vzad();
		case 3:
			red();
		case 4:
			menu();
		}
	}
};

