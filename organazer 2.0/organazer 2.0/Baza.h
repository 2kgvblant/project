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
		{"����" , "MENU"},
		{"\n1 -> ������ �����\n" , "\n1 -> Task list\n"},
		{"2 -> ������� ����. ����\n" , "2 -> History of days\n"},
		{"3 -> ���������\n" , "3 -> Settings\n"},
		{"4 -> �����\n" , "4 -> Exit\n"},
		{"\n1 -> ����� �����\n" , "1 -> Language selection\n"},
		{"\n0 -> �����\n" , "0 -> Back\n"},
		{"\n0 -> �������\n" , "\n0 -> Russia\n"},
		{"1 -> ����������\n" , "1 -> English\n"},
		{"\n1 -> �������� ������\n" , "\n1 -> Add task\n"},
		{"2 -> ������ �����\n" , "2 -> Task list\n"},
		{"3 -> ������ ����������� �����\n" , "3 -> List of completed tasks\n"},
		{"4 -> ����� � ����\n" , "4 -> Exit to the menu\n"},
		{"\n�������� ����� ������\n" , "Select task number"},
		{"\n������ �������\n" , "Task deleted"},
		{"\n������ ���������\n" , "Mission accomplished"},
		{"����� � ������ ���" , "There are no tasks in the list"},
		{"\n\n0 -> ����� � ����\n" , "\n\n0 -> Exit to the menu\n"},
		{"\n�������� ����� ������\n" , "\nSelect task number\n"},
		{"\n������������� ��...\n" , "\nEdit o...\n"},
		{"\n�������!\n" , "\nSuccessfully!\n"},
		{"������� ������...\n" , "Enter task...\n"},
		{"������ ���������\n" , "Task added\n"},
		{"����� � ������ ���" , "There are no tasks in the list"},
		{"\n\n\n1 -> ������� ������\n" , "\n\n\n1 -> Delete task\n"},
		{"2 -> ��������� ������\n" , "2 -> To perform the task\n"},
		{"3 -> ������������� ������\n" , "3 -> Edit task\n"},
		{"4 -> ����� � ����\n" , "4 -> Exit to the menu\n"},
	};
};