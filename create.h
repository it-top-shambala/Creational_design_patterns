#pragma once
#include <string>
#include <iostream>
#include "file.h"

using namespace std;
class create : public program
{
public:
	virtual file* ProgramFile() override
	{
		string path, name;
		cout << "������� ���� � �����: "; cin >> path;
		cout << "������� ��� �����: "; cin >> name;
		cout << "�������� �� ������� �����" << endl;
		cout << "���� ������" << endl;
		return new file(path, name);
	}
};