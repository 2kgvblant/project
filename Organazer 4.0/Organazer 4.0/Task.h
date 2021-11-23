#include <iostream>
#include <string>
#include <vector>
#pragma once
using namespace std;
string dateFoo();

class Task
{
public:
	Task()
	{
	}
	Task(string name)
	{
		taskName = name;
		date = dateFoo();
	}
	const string GetName() { return taskName; };
	const string GetDate() { return date; };
	void setName(string name);
	void setDate(string dateTask);
	void getInfo();
private:
	string taskName;
	string date;
};