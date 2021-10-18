#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <string>
#include "Spisok.h"
#include "Menu.h"
#include "Baza.h"
#include <fstream>
using namespace std;

Baza b;
Menu m;

void Spisok::menu1(int a)
{
	Lang l;
	l.setlang = a;
	int b;
	cout << l.Language[9][l.setlang] << endl;
	cout << l.Language[10][l.setlang] << endl;
	cout << l.Language[11][l.setlang] << endl;
	cout << l.Language[12][l.setlang] << endl;
	cin >> b;
	switch (b)
	{
	case 1:
		system("cls");
		add(l.setlang);
	case 2:
		system("cls");
		spis(l.setlang);
	case 3:
		system("cls");
		vspis(l.setlang);
	case 4:
		system("cls");
		m.menu(l.setlang);
	}
}

void Spisok::del(int a)
{
	Lang l;
	l.setlang = a;
	for (int i = 0, n = 1; i < b.task.size(); i++, n++)
	{
		cout << n << " -> " << b.task[i] << endl;
	}
	cout << l.Language[13][l.setlang] << endl;
	cin >> y;
	b.task.erase((b.task.begin() + y - 1));
	system("cls");
	cout << l.Language[14][l.setlang] << endl;
	//_sleep(3000);
	spis(l.setlang);
}

void Spisok::vzad(int a)
{
	Lang l;
	l.setlang = a;
	for (int i = 0, n = 1; i < b.task.size(); i++, n++)
	{
		cout << n << " -> " << b.task[i] << endl;
	}
	cout << l.Language[13][l.setlang] << endl;
	cin >> y;
	b.vipzad.push_back(b.task[y - 1]);
	b.task.erase((b.task.begin() + y - 1));
	system("cls");
	cout << l.Language[15][l.setlang] << endl;
	spis(l.setlang);
}

void Spisok::vspis(int a)
{
	Lang l;
	l.setlang = a;
	int men;
	if (b.vipzad.size() == 0)
	{
		cout << l.Language[16][l.setlang] << endl;
		system("PAUSE");
		menu1(l.setlang);
	}
	cout << l.Language[11][l.setlang] << endl;
	for (int i = 0, n = 1; i < b.vipzad.size(); i++, n++)
	{
		cout << n << " -> " << b.vipzad[i] << endl;
	}
	cout << l.Language[17][l.setlang] << endl;
	cin >> men;
	system("cls");
	menu1(l.setlang);
}

void Spisok::red(int a)
{
	Lang l;
	l.setlang = a;
	for (int i = 0, n = 1; i < b.task.size(); i++, n++)
	{
		cout << n << " -> " << b.task[i] << endl;
	}
	cout << l.Language[18][l.setlang] << endl;
	cin >> y;
	b.tsk = ((b.task.begin() + y - 1));
	system("cls");
	cout << *b.tsk << endl;
	cout << l.Language[19][l.setlang] << endl;
	string red;
	cin.ignore();
	getline(cin, red);
	*b.tsk = red;
	system("cls");
	cout << l.Language[20][l.setlang] << endl;
	system("PAUSE");
	system("cls");
	spis(l.setlang);
}

void Spisok::add(int a)
{
	Lang l;
	l.setlang = a;
	string zd;
	int n = 0;
	cout << l.Language[21][l.setlang] << endl;
	cin.ignore();
	getline(cin, zd);
	b.task.push_back(zd);
	ofstream fout;
	fout.open("baza.txt", ofstream::app);
	fout << zd;
	fout << "\n";
	fout.close();
	system("cls");
	cout << l.Language[22][l.setlang] << endl;
	//_sleep(3000);
	menu1(l.setlang);
}

void Spisok::spis(int a)
{
	Lang l;
	l.setlang = a;

	if (b.task.empty() == true)
	{
		cout << l.Language[23][l.setlang] << endl;
		system("PAUSE");
		menu1(l.setlang);
	}
	for (int i = 0, n = 1; i < b.task.size(); i++, n++)
	{
		cout << n << " -> " << b.task[i] << endl;
	}
	int c;
	cout << l.Language[24][l.setlang] << endl;
	cout << l.Language[25][l.setlang] << endl;
	cout << l.Language[26][l.setlang] << endl;
	cout << l.Language[27][l.setlang] << endl;
	cin >> c;
	system("cls");
	switch (c)
	{
	case 1:
		del(l.setlang);
	case 2:
		vzad(l.setlang);
	case 3:
		red(l.setlang);
	case 4:
		menu1(l.setlang);
	}
}

void Spisok::baza() {
	string a1;
	ifstream fout;
	fout.open("baza.txt");
	fout.eof();
	while (!fout.eof()) {
		getline(fout, a1);
		b.task.push_back(a1);
	}
	b.task.pop_back();
	fout.close();
}

void Spisok::xz() {
	ofstream fout;
	fout.open("baza1.txt", ofstream::app);
	for (int i = 0; i < b.task.size(); i++)
	{
		fout << b.task[i];
		fout << "\n";
	}
	fout.close();
	rename("baza1.txt", "baza.txt");
}