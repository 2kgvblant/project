#include <iostream>
#include <string>
#pragma once
using namespace std;
string dateFoo();

class DoneTask
{
public:
	DoneTask()
	{
		dateExe = dateFoo();
	}
	const string GetName() { return taskName; };
	const string GetDate() { return date; };
	const string GetDateExe() { return dateExe; };
	void setName(string name);
	void setDate(string dateExe);
	void setDateExe(string date);
	void setTask(string name, string dateTask);
	void getInfo();
private:
	string taskName;
	string date;
	string dateExe;
};

