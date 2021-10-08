#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int menu();

int main()
{
	int a; //Переменная А
	int b; //Переменная Б 
	int c; //Переменная для минуса
	int d; //Переменная для деления
	int f; //Переменная для умножения
	int y; //Переменная для суммы
	int p; //Переменная для функции если

	cout << "Hello, what is your name?" << endl;
	string n;
	cin >> n;
	system("cls");
	cout << "Hello " << n << ", my name Calculator 2.0 by Valera, nice to meet you! " << endl;
tryAgain2:
	cout << "You are ready?" << endl;

	string l;
	cin >> l;
	if (l == "no" || l == "No" || l == "NO") { //Если нет
		system("cls");
		cout << "May be ready?)" << endl;
		cin >> l;
		system("cls");
		if (l == "no" || l == "No" || l == "NO")//Опять если нет
			goto tryAgain2;
	}
	if (l == "yes" || l == "Yes" || l == "YES")//Если да то продолжим
		system("cls");
	else
	{
		system("cls");
		cout << "Vvedite yes or no" << endl;
		goto tryAgain2;
	}

		tryAgain:
	p = menu();
	switch (p)
	{
	case 0:

		exit(1);

	case 1:
	{
		string k = "no";
		while (k == "no") {

			string no;
			string yes;
			cout << "    " << endl;
			system("cls");
			cout << "Vvedite a" << endl;
			cin >> a;
			system("cls");
			cout << "Vvedite b" << endl;
			cin >> b;
			system("cls");
			f = a * b;
			cout << "   " << endl;
			cout << "  " << a << "*" << b << "=" << f << endl;
			cout << "   " << endl;
			cout << "Xotite vernytsya v menu - yes?" << endl;
			cout << "yes or no?" << endl;
			cin >> k;
		}
		system("cls");
		break;
	}
	case 2:
	{
		string k = "no";
		while (k == "no") {

			string no;
			string yes;
			cout << "    " << endl;
			system("cls");
			cout << "Vvedite a" << endl;
			cin >> a;
			system("cls");
			cout << "Vvedite b" << endl;
			cin >> b;
			system("cls");
			y = a + b;
			cout << "    " << endl;
			cout << "  " << a << "+" << b << "=" << y << endl;
			cout << "   " << endl;
			cout << "Xotite vernytsya v menu - yes?" << endl;
			cout << "yes or no?" << endl;
			cin >> k;
		}
		system("cls");
		break;
	}
	case 3:
	{
		string k = "no";
		while (k == "no") {

			string no;
			string yes;
			cout << "    " << endl;
			system("cls");
			cout << "Vvedite a" << endl;
			cin >> a;
			system("cls");
			cout << "Vvedite b" << endl;
			cin >> b;
			system("cls");
			d = a / b;
			cout << "    " << endl;
			cout << "  " << a << ":" << b << "=" << d << endl;
			cout << "   " << endl;
			cout << "Xotite vernytsya v menu - yes?" << endl;
			cout << "yes or no?" << endl;
			cin >> k;
		}
		system("cls");
		break;
	}
	case 4:
	{
		string k = "no";
		while (k == "no") {

			string no;
			string yes;
			cout << "    " << endl;
			system("cls");
			cout << "Vvedite a" << endl;
			cin >> a;
			system("cls");
			cout << "Vvedite b" << endl;
			cin >> b;
			system("cls");
			c = a - b;
			cout << "    " << endl;
			cout << "  " << a << "-" << b << "=" << c << endl;
			cout << "   " << endl;
			cout << "Xotite vernytsya v menu - yes?" << endl;
			cout << "yes or no?" << endl;
			cin >> k;
		}
		system("cls");
		break;
	}
	}
	goto tryAgain;
}