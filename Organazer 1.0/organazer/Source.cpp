#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <vector>
#pragma warning(disable : 4996)
using namespace std;
int main();
class vect
{
public:
	vector<string>task;
	vector<string>vipzad;
	vector<string>::iterator tsk;
	vector<string>::const_iterator iter;
};
class spisok
{
vect baza;
	public:
		int y;
		void menu()
		{
			int a;
			cout << "\n1 -> Добавить задачу\n" << endl;
			cout << "2 -> Список задач\n" << endl;
			cout << "3 -> Список выполненных задач\n" << endl;
			cout << "4 -> Выйти в меню\n" << endl;
			cin >> a;
			switch (a)
			{
			case 1:
				system("cls");
				add();
			case 2:
				system("cls");
				spis();
			case 3:
				system("cls");
				vspis();
			case 4:
				system("cls");
				main();
			}
		}
		void del()
		{
			for (int i = 0, n = 1; i < baza.task.size(); i++, n++)
			{
				cout << n << " -> " << baza.task[i] << endl;
			}
			cout << "\nВыберите номер задачи\n" << endl;
			cin >> y;
			baza.task.erase((baza.task.begin() + y - 1));
			system("cls");
			cout << "\nЗадача удалена\n" << endl;
			//_sleep(3000);
			spis();
		}
		void vzad()
		{
			for (int i = 0, n = 1; i < baza.task.size(); i++, n++)
			{
				cout << n << " -> " << baza.task[i] << endl;
			}
			cout << "\nВыберите номер задачи\n" << endl;
			cin >> y;
			baza.vipzad.push_back(baza.task[y - 1]);
			baza.task.erase((baza.task.begin() + y - 1));
			system("cls");
			cout << "\nЗадача выполнена\n" << endl;
			spis();
		}
		void vspis()
		{
			int men;
			if (baza.vipzad.size() == 0)
			{
				cout << "Задач в списке нет" << endl;
				system("PAUSE");
				menu();
			}
			cout << "\nСписок выполненных задач\n" << endl;
			for (int i = 0, n = 1; i < baza.vipzad.size(); i++, n++)
			{
				cout << n << " -> " << baza.vipzad[i] << endl;
			}
			cout << "\n\n0 -> Выйти в меню\n" << endl;
			cin >> men;
			system("cls");
			menu();
		}
		void red()
		{
			for (int i = 0, n = 1; i < baza.task.size(); i++, n++)
			{
				cout << n << " -> " << baza.task[i] << endl;
			}
			cout << "\nВыберите номер задачи\n" << endl;
			cin >> y;
			baza.tsk = ((baza.task.begin() + y - 1));
			system("cls");
			cout << *baza.tsk << endl;
			cout << "\nРедактировать на...\n" << endl;
			string red;
			cin.ignore();
			getline(cin, red);
			*baza.tsk = red;
			system("cls");
			cout << "\nУспешно!\n" << endl;
			system("PAUSE");
			system("cls");
			spis();
		}
		void add()
		{
			string zad;
			int n = 0;
			cout << "Введите задачу...\n" << endl;
			cin.ignore();
			getline(cin, zad);
			baza.task.push_back(zad);
			system("cls");
			cout << "Задача добавлена\n" << endl;
			//_sleep(3000);
			menu();
			return;
		}
		void spis()
		{
			if (baza.task.empty() == true)
			{
				cout << "Задач в списке нет" << endl;
				system("PAUSE");
				menu();
			}
			for (int i = 0, n = 1; i < baza.task.size(); i++, n++)
			{
				cout << n << " -> " << baza.task[i] << endl;
			}
			int a;
			cout << "\n\n\n1 -> Удалить задачу\n" << endl;
			cout << "2 -> Выполнить задачу\n" << endl;
			cout << "3 -> Редактировать задачу\n" << endl;
			cout << "4 -> Выйти в меню\n" << endl;
			cin >> a;
			system("cls");
			switch (a)
			{
			case 1:
				del();
			case 2:
				vzad();
			case 3:
				red();
			case 4:
				menu();
			}
		}
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");
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
		spisok s;
		s.menu();
	}
	}
}