// Organazer 4.0.cpp : Этот файл содержит что то крутое. Здесь начинается и не заканчивается что то крутое.

#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <windows.h>

#pragma warning(disable : 4996)
using namespace std;

void Setting();
void MenuList();
void read();
void readExe();
void write();
void writeExe();

ofstream fout;
ifstream fin;

int Date;
int lang;
int sizeTask = 0;
int sizeDoneTask = 0;

void Enter()
{
	cin.get();
	cin.get();
} //Нажмите ENTER

string Lang(int a, int b)
{
	const string mas[60][2] = { {"МЕНЮ" , "MENU"}, //0
		{"1 -> Список задач" , "1 -> Task list"}, //1
		{"2 -> История пред. дней" , "2 -> History of days"}, //2
		{"3 -> Настройки" , "3 -> Settings"}, //3
		{"4 -> Выход" , "4 -> Exit"}, //4
		{"Выбор языка" , "Language selection"}, //5
		{"0 -> Назад" , "0 -> Back"}, //6
		{"1 -> Русский" , "1 -> Russia"}, //7
		{"2 -> Английский" , "2 -> English"}, //8
		{"1 -> Добавить задачу" , "1 -> Add task"}, //9
		{"2 -> Список задач" , "2 -> Task list"}, //10
		{"3 -> Список выполненных задач" , "3 -> List of completed tasks"}, //11
		{"4 -> Выйти в меню" , "4 -> Exit to the menu"}, //12
		{"Выберите номер задачи" , "Select task number"}, //13
		{"Задача удалена" , "Task deleted"}, //14
		{"Задача выполнена" , "Mission accomplished"}, //15
		{"Задач в списке нет" , "There are no tasks in the list"}, //16
		{"0 -> Выйти в меню" , "0 -> Exit to the menu"}, //17
		{"Выберите номер задачи" , "Select task number"}, //18
		{"Редактировать на..." , "Edit o..."}, //19
		{"Успешно!" , "Successfully!"}, //20
		{"Введите задачу..." , "Enter task..."}, //21
		{"Задача добавлена" , "Task added"}, //22
		{"Задач в списке нет" , "There are no tasks in the list"}, //23
		{"1 -> Удалить задачу" , "1 -> Delete task"}, //24
		{"2 -> Выполнить задачу" , "2 -> To perform the task"}, //25
		{"3 -> Редактировать задачу" , "3 -> Edit task"}, //26
		{"4 -> Выйти в меню" , "4 -> Exit to the menu"}, //27
		{"Настройки" , "Settings"}, //28
		{"1 -> Выбор языка" , "1 -> Language selection"}, //29
		{"Введите корректный символ" , "Please enter a valid character"}, //30
		{"Нажмите ENTER для выхода", "Press ENTER to exit"}, //31
		{ "Января", "January" },//32
		{ "Февраля", "February" },//33
		{ "Марта", "March" },//34
		{ "Апреля", "April" },//35
		{ "Мая", "May" },//36
		{ "Июня", "June" },//37
		{ "Июля", "July" },//38
		{ "Августа", "August" },//39
		{ "Сентября", "September" },//40
		{ "Октября", "October" },//41
		{ "Ноября", "November" },//42
		{ "Декабря", "December" },//43
	};
	return mas[a][b];
}

string month(int mon, int lang)
{
	switch (mon)
	{
	case 1:
		return Lang(32, lang);
	case 2:
		return Lang(33, lang);
	case 3:
		return Lang(34, lang);
	case 4:
		return Lang(35, lang);
	case 5:
		return Lang(36, lang);
	case 6:
		return Lang(37, lang);
	case 7:
		return Lang(38, lang);
	case 8:
		return Lang(39, lang);
	case 9:
		return Lang(40, lang);
	case 10:
		return Lang(41, lang);
	case 11:
		return Lang(42, lang);
	case 12:
		return Lang(43, lang);
	}
}

string dateFoo()
{
	struct tm Time;
	time_t date = time(0);
	Time = *localtime(&date);
	string Date = to_string(Time.tm_mday) + " " + month(Time.tm_mon + 1, lang) + " " + to_string(Time.tm_year + 1900) + " года";
	return Date;
}

void Exit()
{
	system("cls");
	cout << Lang(31, lang) << endl;
	Enter();
	write();
	writeExe();
	exit(1);
}

void choiseFoo(int choise)
{
	switch (choise)
	{
	case 1:
		MenuList();
	case 2:
	case 3:
		Setting();
	case 4:
		Exit();
	}
}

void Menu()
{
	system("cls");
	cout << Lang(0, lang) << endl << endl;
	cout << Lang(1, lang) << endl;
	cout << Lang(2, lang) << endl;
	cout << Lang(3, lang) << endl;
	cout << Lang(4, lang) << endl;
	int choise;
	cin >> choise;
	choiseFoo(choise);
}

int setLanguageMain(int a)
{
	int language = a;
	cout << Lang(5, language) << endl << endl;
	cout << Lang(7, language) << endl;
	cout << Lang(8, language) << endl;
	cin >> language;
	return language - 1;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");

	lang = setLanguageMain(0);
	read();
	readExe();
	Menu();
}