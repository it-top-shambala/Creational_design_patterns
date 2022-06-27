#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <io.h>  //библиотека для работы с файлами в плане доступа 
#include <windows.h>

using namespace std;

class Document
{
public:
	string Path;

	Document()//конструктор с инициализацией
	{
		Path = SetPath();
	}
	//Функция ввода пути
	string InputPath()
	{
		while (CheckPath())
		{
			InputPath();
		}
		return Path;
	}
	//Функция ввода пути
	string SetPath()
	{
		return (InputPath());
	}
	//Функция проверки на корректность ввода пути к файлу
	bool CheckPath()
	{
		return 0;
	}
	//Функция конкатенации имени файла к пути
	string AddName()
	{
		string NewPath;
		return NewPath;
	}
	//функция определения позиции  последней заданной подстроки  в строке
	int PosSimbol(string str)
	{
		int pos = 0;
		return pos;//возвращение позиции последней подстроки в строке
	}
};


