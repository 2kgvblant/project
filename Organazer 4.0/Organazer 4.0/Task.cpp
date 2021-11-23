#include "Task.h"

void Task::getInfo()
{
	cout << taskName << " | " << date;
}

void Task::setName(string name)
{
	taskName = name;
}

void Task::setDate(string dateTask)
{
	date = dateTask;
}