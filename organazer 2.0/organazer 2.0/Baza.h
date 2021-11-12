#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <vector>
#include <ctime>
#pragma once
using namespace std;
class Date
{
public:
	int date;
};
class Baza
{
public:
	vector<string>task;
	vector<string>vipzad;
	vector<string>::iterator tsk;
	vector<string>::const_iterator iter;
};
class Lang
{
public:
	int setlang;
	const string Language[28][2] =
	{
		{"МЕНЮ" , "MENU"},
		{"\n1 -> Список задач\n" , "\n1 -> Task list\n"},
		{"2 -> История пред. дней\n" , "2 -> History of days\n"},
		{"3 -> Настройки\n" , "3 -> Settings\n"},
		{"4 -> Выход\n" , "4 -> Exit\n"},
		{"\n1 -> Выбор языка\n" , "1 -> Language selection\n"},
		{"\n0 -> Назад\n" , "0 -> Back\n"},
		{"\n0 -> Русский\n" , "\n0 -> Russia\n"},
		{"1 -> Английский\n" , "1 -> English\n"},
		{"\n1 -> Добавить задачу\n" , "\n1 -> Add task\n"},
		{"2 -> Список задач\n" , "2 -> Task list\n"},
		{"3 -> Список выполненных задач\n" , "3 -> List of completed tasks\n"},
		{"4 -> Выйти в меню\n" , "4 -> Exit to the menu\n"},
		{"\nВыберите номер задачи\n" , "Select task number"},
		{"\nЗадача удалена\n" , "Task deleted"},
		{"\nЗадача выполнена\n" , "Mission accomplished"},
		{"Задач в списке нет" , "There are no tasks in the list"},
		{"\n\n0 -> Выйти в меню\n" , "\n\n0 -> Exit to the menu\n"},
		{"\nВыберите номер задачи\n" , "\nSelect task number\n"},
		{"\nРедактировать на...\n" , "\nEdit o...\n"},
		{"\nУспешно!\n" , "\nSuccessfully!\n"},
		{"Введите задачу...\n" , "Enter task...\n"},
		{"Задача добавлена\n" , "Task added\n"},
		{"Задач в списке нет" , "There are no tasks in the list"},
		{"\n\n\n1 -> Удалить задачу\n" , "\n\n\n1 -> Delete task\n"},
		{"2 -> Выполнить задачу\n" , "2 -> To perform the task\n"},
		{"3 -> Редактировать задачу\n" , "3 -> Edit task\n"},
		{"4 -> Выйти в меню\n" , "4 -> Exit to the menu\n"},
	};
};