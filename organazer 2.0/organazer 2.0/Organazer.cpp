#include <iostream>
#include <fstream>
#include <ctime>
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

int timex;

int main()
{
	Date d;
	Menu m;
	Lang l;
	Spisok h;
	l.setlang = 0;
	ofstream fout;
	fout.open("baza.txt", ofstream::app);
	fout.close();
	ofstream vzad;
	vzad.open("vipzad.txt", ofstream::app);
	vzad.close();
	h.baza();
	h.vbaza();
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");
	m.menu(l.setlang);
}