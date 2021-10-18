#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <vector>
#include "Menu.h"
#include "Baza.h"
#include "Setting.h"
#include "Spisok.h"

#pragma warning(disable : 4996)
using namespace std;
int main()
{
	Lang l;
	l.setlang = 0;
	Menu m;
	Spisok h;
	ofstream fout;
	fout.open("baza.txt", ofstream::app);
	fout.close();
	h.baza();
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");
	m.menu(l.setlang);
}