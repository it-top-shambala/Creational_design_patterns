
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <io.h>  //библиотека для работы с файлами в плане доступа 
#include <windows.h>

using namespace std;
class ActDoc
{
public:
	string Path;

	ActDoc()//конструктор с инициализацией
	{
		Path = SetPath();
	}

	//Функция ввода пути с клавиатуры
	string SetPath()
	{
		cout << "Введите путь к документу: ";
		getline(cin, Path);// ввод пути и имени файла с клавиатуры
		while (CheckPath())
		{
			cout << "Задайте путь  к документу корректно: " << endl;
			SetPath();
		}
		return Path;
	}

	//Функция проверки на корректность ввода пути к файлу
	bool CheckPath()
	{
		WIN32_FILE_ATTRIBUTE_DATA;
		const char* P = Path.data();
		_finddata_t* InfoFile = new _finddata_t;
		intptr_t Done = _findfirst(P, InfoFile);
		if (InfoFile->attrib & _A_SUBDIR) //проверка не директория ли
		{
			Path.append("\\");
			Path = AddName();
			return 0;
		}
		if (Done == -1)
		{
			while (int pos = PosSimbol("\\"))
			{
				Path.erase(pos);
				if (!CheckPath()) return 0;
			};
			printf("Путь задан неверно!\n");
			return 1;
		}
		return 0;
	}
	//функция определения позиции  последней заданной подстроки  в строке
	int PosSimbol(string str)
	{
		int i = 0;
		int pos = 0;
		//определение позиции последнего заданного символа  в строке
		for (i = Path.find(str, i++); i != -1; i = Path.find(str, i + 1))
		{
			pos = i;
			continue;
		}
		return pos;//возвращение позиции последнего символа
	}
	//функция задания имени файла в пути
	string AddName()
	{
		string NewName;// новое имя файла
		cout << "Задайте имя документа: ";
		getline(cin, NewName);// имени файла с клавиатуры		
		string NewPath = Path;
		//извлечение пути из старого имени
		int pos = 0;
		pos = PosSimbol("\\");
		NewPath.erase(pos + 1);
		//добавление к пути нового имени и передача его в функцию rename
		NewPath.append(NewName);
		return NewPath;
	}
};


class FunDoc : virtual  ActDoc
{
public:
	//функция открытия документа
	void Open()
	{
		ifstream Doc(Path);
		if (Doc.is_open()) // вызов метода is_open()
		{
			cout << "Документ открыт!" << endl;
		}
		else
		{
			cout << "Ошибка при открытии документа!" << endl;
		}
	}
	//Функция закрытия файла
	void Close()
	{
		ifstream Doc(Path);
		if (Doc.is_open())
		{
			Doc.close();
			cout << "Документ закрыт!" << endl;
		}
		else
		{
			cout << "Документ был закрыт!" << endl;
		}
	}
	//Функция печати доумента
	void Print()
	{
		ifstream Doc(Path);
		cout << "Документ " << Path << " распечатан!" << endl;

	}
	//Функция создания документа 
	void Create()
	{
		ifstream Doc(Path);
		if (Doc.is_open())
		{
			cout << "Документ существует!";
		}
		else
		{
			ofstream Doc(Path);
			cout << "Документ создан!\n\n";
		}
	}
	//функция сохранения файла
	void Save()
	{
		ifstream Doc(Path);
		if (Doc.is_open())
		{
			Doc.close();
			cout << "Документ сохранен!\n\n";
		}
		else
		{
			cout << "Документ был сохранен!\n\n";
		}
	}
	//функция сохранения файла с новым именем
	void Save_n()
	{
		ifstream Doc(Path);
		if (Doc.is_open())
		{
			Doc.close();
		}
		Rename();
	}

	//Переименование файла
	void Rename()
	{
		string NewPath;
		NewPath = AddName();
		rename(Path.data(), NewPath.data());
		cout << "Документ успешно сохранен с новым именем!" << endl;
	}
};






