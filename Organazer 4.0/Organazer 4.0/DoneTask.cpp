#include "DoneTask.h"

void DoneTask::getInfo()
{
	cout << taskName << " | Выполнена:  " <<  dateExe << " | Поставлена: " << date;
}

void DoneTask::setTask(string name, string dateTask)
{
	taskName = name;
	date = dateTask;
}

void DoneTask::setName(string name)
{
	taskName = name;
}

void DoneTask::setDate(string dateExe)
{
	date = dateExe;
}

void DoneTask::setDateExe(string date)
{
	dateExe = date;
}