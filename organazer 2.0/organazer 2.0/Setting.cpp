#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <string>
#include "Menu.h"
#include "Baza.h"
#include "Setting.h"
#include "Baza.cpp"

using namespace std;
Lang l;
void Setting::sett(int a)
{
	l.setlang = a;
	cout << l.Language[5][l.setlang] << endl;
	cout << l.Language[6][l.setlang] << endl;
	int set;
	cin >> set;
	system("cls");
	switch (set)
	{
	case 1:
	{
		cout << l.Language[7][l.setlang] << endl;
		cout << l.Language[8][l.setlang] << endl;
		cin >> l.setlang;
		system("cls");
		sett(l.setlang);
	}
	case 0:
	{
		Menu m;
		m.menu(l.setlang);
	}
	}
}
