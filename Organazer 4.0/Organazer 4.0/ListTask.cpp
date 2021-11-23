// ListTask.cpp : Файл списка задач.

#include <iostream>
#include <ctime>
#include <string>
#include <windows.h>
#include <vector>
#include <fstream>
#include "Task.h"
#include "DoneTask.h"

#pragma warning(disable : 4996)
using namespace std;

void Menu();
void Enter();
void MenuList();
void delTask();
void redTask();
void exeTask();
void write();
string dateFoo();
string Lang(int a, int b);

extern int Date;
extern int lang;
extern int sizeTask;
extern int sizeDoneTask;
extern ofstream fout;
extern ifstream fin;

vector<Task*> task;
vector<DoneTask*> donetask;

void taskList()
{
	system("cls");
	if (sizeTask == 0)
	{
		cout << Lang(23, lang) << endl;
		Enter();
		MenuList();
	}
	for (int i = 0; i < sizeTask; i++)
	{
		cout << i + 1 << " -> "; task[i]->getInfo(); cout << endl;
	}
	cout << endl << endl << Lang(24, lang) << endl;
	cout << Lang(25, lang) << endl;
	cout << Lang(26, lang) << endl << endl;
	cout << Lang(6, lang) << endl;
	int choise;
	cin >> choise;
	if (choise == 0)
		MenuList();
	else if (choise == 1)
		delTask();
	else if (choise == 2)
		exeTask();
	else if (choise == 3)
		redTask();
	else
	{
		system("cls");
		cout << Lang(30, lang) << "(0)" << endl;
		Enter();
		taskList();
	}
}

void doneTaskList()
{
	system("cls");
	if (sizeDoneTask == 0)
	{
		cout << Lang(23, lang) << endl;
		Enter();
		Menu();
	}
	for (int i = 0; i < sizeDoneTask; i++)
	{
		cout << i + 1 << " -> "; donetask[i]->getInfo(); cout << endl;
	}
	cout << endl << Lang(6, lang) << endl;
	int choise;
	cin >> choise;
	if (choise == 0)
		MenuList();
	else
	{
		system("cls");
		cout << Lang(30, lang) << "(0)" << endl;
		Enter();
		doneTaskList();
	}
}

void addTask()
{
	system("cls");
	string name;
	cin.ignore();
	getline(cin, name);
	task.push_back(new Task(name));
	sizeTask++;
	MenuList();
}

void read()
{
	fin.open("task.txt", ofstream::in);
	string name;
	while (getline(fin, name))
	{
		task.push_back(new Task());
		task[sizeTask]->setName(name);
		getline(fin, name);
		task[sizeTask]->setDate(name);
		sizeTask++;
	}
	fin.close();
}

void readExe()
{
	fin.open("taskExe.txt", ofstream::in);
	string name;
	while (getline(fin, name))
	{
		donetask.push_back(new DoneTask());
		donetask[sizeDoneTask]->setName(name);
		getline(fin, name);
		donetask[sizeDoneTask]->setDate(name);
		getline(fin, name);
		donetask[sizeDoneTask]->setDateExe(name);
		sizeDoneTask++;
	}
	fin.close();
}

void write()
{
	fout.open("task.txt", ofstream::out | ofstream::trunc);
	for (int i = 0; i < sizeTask; i++)
	{
		fout << task[i]->GetName() << endl;
		fout << task[i]->GetDate() << endl;
	}
	fout.close();
}

void writeExe()
{
	fout.open("taskExe.txt", ofstream::out | ofstream::trunc);
	if (sizeDoneTask > 0)
	{
		for (int i = 0; i < sizeDoneTask; i++)
		{
			fout << donetask[i]->GetName() << endl;
			fout << donetask[i]->GetDate() << endl;
			fout << donetask[i]->GetDateExe() << endl;
		}
		fout.close();
	}
}

void redTask()
{
	system("cls");
	for (int i = 0; i < sizeTask; i++)
	{
		cout << i + 1 << " -> "; task[i]->getInfo(); cout << endl;
	}
	cout << Lang(18, lang) << endl;
	int choise;
	cin >> choise;
	system("cls");
	cout << Lang(19, lang) << endl;
	string newTask;
	cin.ignore(); getline(cin, newTask);
	task[choise - 1]->setName(newTask);
	taskList();
}

void delTask()
{
	system("cls");
	for (int i = 0; i < sizeTask; i++)
	{
		cout << i + 1 << " -> "; task[i]->getInfo(); cout << endl;
	}
	cout << Lang(18, lang) << endl;
	int choise;
	cin >> choise;
	task.erase(task.begin() + choise - 1);
	sizeTask--;
	taskList(); 
}

void exeTask()
{
	system("cls");
	for (int i = 0; i < sizeTask; i++)
	{
		cout << i + 1 << " -> "; task[i]->getInfo(); cout << endl;
	}
	cout << Lang(18, lang) << endl;
	int choise;
	cin >> choise;
	donetask.push_back(new DoneTask());
	donetask[sizeDoneTask]->setTask(task[choise - 1]->GetName(), task[choise - 1]->GetDate());
	task.erase(task.begin() + choise - 1);
	sizeDoneTask++;
	sizeTask--;
	taskList();
}

void choiseFooList(int choise)
{
	switch (choise)
	{
	case 1:
		addTask();
	case 2:
		taskList();
	case 3:
		doneTaskList();
	case 4:
		Menu();
	}
}

void MenuList()
{
	system("cls");
	cout << Lang(9, lang) << endl;
	cout << Lang(10, lang) << endl;
	cout << Lang(11, lang) << endl;
	cout << Lang(12, lang) << endl;
	int choise;
	cin >> choise;
	choiseFooList(choise);
}