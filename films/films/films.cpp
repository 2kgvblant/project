#include <iostream>
#include <windows.h>
#include <vector>
#include <ctime>
#include <string> 
#include <fstream>
#pragma warning(disable : 4996)
/*после ввода фильма программа задает небольшой опрос по фильму(по тиму можно ли посмотреть второй раз, на сколько понравился фильм и т.д) по этим данным программа 
сортирует просмотренные фильмы*/
using namespace std;

void choiseFoo(int choise);
void Menu();
int Date;
int lang;
int sizeFilm = 0;
const int NUMBER = 100;
const char * file = "Film.txt";

string Lang(int a, int b)
{
	const string mas[28][2] = { { "Введите название фильма...", "Enter the title of the movie..." }, //0
		{ "Оцените фильм по 10ти бальной шкале...", "Rate the film on a 10-point scale..." },//1
		{ "Выберите язык", "Choise language" },//2
		{ "0 - Русский", "0 - Russian" },//3
		{ "1 - Английкий", "1 - English" },//4
		{ "МЕНЮ", "MENU" },//5
		{ "1 - Добавить фильм", "1 - Add film to list" },//6
		{ "2 - Список фильмов", "2 - List of films" },//7
		{ "3 - Настройки", "3 - Setting" },//8
		{ "0 - Выйти", "0 - Exit" },//9
		{ "Нажмите ENTER для выхода", "Press ENTER to exit" },//10
		{ "1 - Выбор языка", "1 - Choise language" },//11
		{ "0 - Назад", "0 - Back" },//12
		{ "Введите корректный символ", "Please enter a valid character" },//13
		{ "Список фильмов пуст", "Movie list is empty" },//14
		{ "Фильм добавлен", "Movie added" },//15
		{ "Января", "January" },//16
		{ "Февраля", "February" },//17
		{ "Марта", "March" },//18
		{ "Апреля", "April" },//19
		{ "Мая", "May" },//20
		{ "Июня", "June" },//21
		{ "Июля", "July" },//22
		{ "Августа", "August" },//23
		{ "Сентября", "September" },//24
		{ "Октября", "October" },//25
		{ "Ноября", "November" },//26
		{ "Декабря", "December" },//27
	};
	return mas[a][b];
}

string month(int mon, int lang)
{
	switch (mon)
	{
	case 1:
		return Lang(16, lang);
	case 2:
		return Lang(17, lang);
	case 3:
		return Lang(18, lang);
	case 4:
		return Lang(19, lang);
	case 5:
		return Lang(20, lang);
	case 6:
		return Lang(21, lang);
	case 7:
		return Lang(22, lang);
	case 8:
		return Lang(23, lang);
	case 9:
		return Lang(24, lang);
	case 10:
		return Lang(25, lang);
	case 11:
		return Lang(26, lang);
	case 12:
		return Lang(27, lang);
	}
}

string DateFoo()
{
	struct tm Time;
	time_t date = time(0);
	Time = *localtime(&date);
	string Date = to_string(Time.tm_mday) + " " + month(Time.tm_mon + 1, lang) + " " + to_string(Time.tm_year + 1900) + " года";
	return Date;
}

void Enter()
{
	cin.get();
	cin.get();
} //Нажмите ENTER

class Films
{
public:
	void getInfo()
	{
		cout << "Название: " << name << endl << "Оценка (0 - 10): " << grade << endl << "Описание: " << desc << endl << "Дата просмотра: " << date;
	}

	void setInfo()
	{
		cout << "Введите название: ";
		cin >> name;
		cout << endl;
		cout << "Оцените от 0 - 10 ";
		cin >> grade;
		cout << endl;
		cout << "Опишите в два предложения ";
		cin >> desc;
		date = DateFoo();
		cout << "Фильм добавлен";
	}

	string getName()
	{
		return name;
	}
	void setName(string setname)
	{
		name = setname;
	}

	string getGrade()
	{
		return grade;
	}
	void setGrade(string setgrade)
	{
		grade = setgrade;
	}

	string getDesc()
	{
		return desc;
	}
	void setDesc(string setdesc)
	{
		desc = setdesc;
	}

	string getDate()
	{
		return date;
	}
	void setDate(string setdate)
	{
		date = setdate;
	}

private:
	string name;//имя
	string grade;//оценка
	string desc; //краткое описание
	string date; //когда я посмотрел фильм
};

Films* films = new Films[NUMBER];

void BazaFilmovAdd()
{
	ofstream baza;
	if (baza.eof() == false)
		baza << endl;
	baza.open(file, ofstream::out | ofstream::app);
	baza << films[sizeFilm].getName() << endl;
	baza << films[sizeFilm].getGrade() << endl;
	baza << films[sizeFilm].getDesc() << endl;
	baza << films[sizeFilm].getDate() << endl;
	baza.close();
}

void BazaFilmovMain()
{
	ifstream baza;
	baza.open(file, ofstream::in);
	string name;
	while (getline(baza, name))
	{
		films[sizeFilm].setName(name);
		getline(baza, name);
		films[sizeFilm].setGrade(name);
		getline(baza, name);
		films[sizeFilm].setDesc(name);
		getline(baza, name);
		films[sizeFilm].setDate(name);
		sizeFilm++;
	}
	baza.close();
}

void getFilm()
{
	system("cls");
	if (sizeFilm == 0)
	{
		cout << Lang(14, lang) << endl;
		Enter();
		Menu();
	}
	for (int i = 0; i < sizeFilm; i++)
	{
		cout << i + 1 << " - " << films[i].getName() << endl;
	}
}

int setLanguage(int a)
{
	system("cls");
	int language = a;
	cout << Lang(2, language) << endl;
	cout << Lang(3, language) << endl;
	cout << Lang(4, language) << endl;
	cin >> language;
	return language;
}

void Menu()
{
	system("cls");
	cout << Lang(5, lang) << endl << endl;
	cout << Lang(6, lang) << endl;
	cout << Lang(7, lang) << endl;
	cout << Lang(8, lang) << endl << endl;
	cout << Lang(9, lang) << endl;
	int choise;
	cin >> choise;
	choiseFoo(choise);
}

void Exit()
{
	system("cls");
	cout << Lang(10, lang) << endl;
	Enter();
	exit(1);
}

void Setting()
{
	system("cls");
	cout << Lang(11, lang) << endl;
	cout << Lang(12, lang) << endl;
	int choise;
	cin >> choise;
	if (choise == 1)
	{
		lang = setLanguage(lang);
		Menu();
	}
	else if (choise == 0)
	{
		Menu();
	}
	else
	{
		system("cls");
		cout << Lang(13, lang) << "(1,2)" << endl;
		Enter();
		Setting();
	}
}

void List()
{
	system("cls");
	getFilm();
	cout << endl << Lang(12, lang) << endl;
	int choise;
	cin >> choise;
	if (choise <= sizeFilm && choise >= 1)
	{
		system("cls");
		films[choise - 1].getInfo();
		cout << endl << endl << Lang(12, lang) << endl;
		cin >> choise;
		if (choise == 0)
			List();
	}
	else if (choise == 0)
		Menu();
	else
	{
		system("cls");
		cout << Lang(13, lang) << "(№ фильма или 0)" << endl;
		Enter();
		List();
	}
}

void add()
{
	system("cls");
	int i = 0;
	films[sizeFilm].setInfo();
	BazaFilmovAdd();
	sizeFilm++;
	Menu();
}

void choiseFoo(int choise)
{
	switch (choise)
	{
	case 0:
		Exit();
	case 1:
		add();
	case 2:
		List();
	case 3:
		Setting();
	}
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "rus");

	struct tm Time;
	time_t date = time(0);
	Time = *localtime(&date);
	Date = Time.tm_mon + 1;
	int language;
	lang = setLanguage(0);
	BazaFilmovMain();
	Menu();

	cin.get();
	//приложение помогает хранить воспоминания о просмотренных фильмах и заставляет людей больше посвящать этому времени.
}

/*ВВедите название фильма
 Оценить его по 10 бальной шкале
 Написать пару слов про фильм
 Задать несколько вопросов по фильму, по типу посмотрел бы я его второй раз
 Отсортировать фильм к уже имеющимся в базе фильмам
 */