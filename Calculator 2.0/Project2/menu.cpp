#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int x;
int menu()
{
	
	cout << "MENU" << endl;
	cout << "    " << endl;
	cout << "Make a choice:" << endl;
	cout << "    " << endl;
	cout << "1 - a * b" << endl;
	cout << "2 - a + b" << endl;
	cout << "3 - a : b" << endl;
	cout << "4 - a - b" << endl;
	cout << "    " << endl;
	cout << "0 - EXIT PROG" << endl;
	cin >> x;
	return x;
}