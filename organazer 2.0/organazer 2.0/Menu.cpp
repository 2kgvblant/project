#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <string>
#include "Menu.h"
#include "Spisok.h"
#include "Baza.h"
#include "Setting.h"

using namespace std;

void Menu::menu(int a)
{
	Lang l;
	l.setlang = a;
	Setting set;
	Spisok s;

	cout << l.Language[0][l.setlang] << endl;
	cout << l.Language[1][l.setlang] << endl;
	cout << l.Language[2][l.setlang] << endl;
	cout << l.Language[3][l.setlang] << endl;
	cout << l.Language[4][l.setlang] << endl;
	int menu;
	cin >> menu;
	system("cls");
	switch (menu)
	{
	case 1:
	{
		s.menu1(l.setlang);
	}
	case 3:
	{
		set.sett(l.setlang);
	}
	}
}
