// Setting.cpp : Файл настроек проги.

#include <iostream>
#include <ctime>
#include <string>
#include <windows.h>

#pragma warning(disable : 4996)
using namespace std;

string Lang(int a, int b);
void Menu();
void Enter();
int setLanguage();

extern int Date;
extern int lang;


void Setting()
{
	system("cls");
	cout << Lang(28, lang) << endl << endl;
	cout << Lang(29, lang) << endl;
	cout << Lang(6, lang) << endl;
	int choise;
	cin >> choise;
	if (choise == 1)
	{
		lang = setLanguage();
		Setting();
	}
	else if (choise == 0)
	{
		Menu();
	}
	else
	{
		system("cls");
		cout << Lang(30, lang) << "(0,1)" << endl;
		Enter();
		Setting();
	}
}

int setLanguage()
{
	system("cls");
	int choise;
	cout << Lang(5, lang) << endl << endl;
	cout << Lang(7, lang) << endl;
	cout << Lang(8, lang) << endl << endl;
	cout << Lang(6, lang) << endl;
	cin >> choise;
	if (choise == 0)
		Setting();
	else if (choise == 1 || choise == 2)
		return choise - 1;
	else
		cout << Lang(30, lang) << "(0,1,2)" << endl;
}