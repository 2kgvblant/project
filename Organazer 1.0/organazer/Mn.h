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
			cout << "МЕНЮ" << endl;
			cout << "\n1 -> Список задач\n" << endl;
			cout << "2 -> История пред. дней\n" << endl;
			cout << "3 -> Настройки\n" << endl;
			cout << "4 -> Выход\n" << endl;
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

