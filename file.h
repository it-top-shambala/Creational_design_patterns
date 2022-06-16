#pragma once
#include <string>
#include <iostream>
#include "program.h"
using namespace std;
class file
{
public:
	string _path;
	string _name;	
	file():_path (""), _name (""){}
	file(string path, string name)
	{
		_path = path;
		_name = name;
	}
	void save()
	{
		cout << "Сохраняем файл " << _path + _name << endl;
	}
	void saveas()
	{		
		cout << "Введите путь к новому файлу :";
		cin >> _path;
		cout << "Введите имя нового файла :";
		cin >> _name;
		cout << "Сохраняем файл как: " << _path + _name << endl;
	}
	void print()
	{
		cout << "Печать файла " << _path + _name << endl;
	}
	void close()
	{
		cout<<"файл закрыт" << endl;
	}
	
};