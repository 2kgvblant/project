#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <vector>
#pragma once
using namespace std;

class Spisok
{
public:
	int y;
	void menu1(int a);
	void del(int a);
	void vzad(int a);
	void vspis(int a);
	void red(int a);
	void add(int a);
	void spis(int a);
	void baza();
	void xz();
	void vbaza();
	void date(string date);
};