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
		cout << "��������� ���� " << _path + _name << endl;
	}
	void saveas()
	{		
		cout << "������� ���� � ������ ����� :";
		cin >> _path;
		cout << "������� ��� ������ ����� :";
		cin >> _name;
		cout << "��������� ���� ���: " << _path + _name << endl;
	}
	void print()
	{
		cout << "������ ����� " << _path + _name << endl;
	}
	void close()
	{
		cout<<"���� ������" << endl;
	}
	
};