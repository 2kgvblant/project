#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <vector>
#include "Spisok.h"

using namespace std;
class Mn
{
	public:
		void meen()
		{
			cout << "����" << endl;
			cout << "\n1 -> ������ �����\n" << endl;
			cout << "2 -> ������� ����. ����\n" << endl;
			cout << "3 -> ���������\n" << endl;
			cout << "4 -> �����\n" << endl;
			int menu;
			cin >> menu;
			system("cls");
			switch (menu)
			{
			case 1:
			{
				Spisok s;
				s.menu();
			}
			}
		}
};

