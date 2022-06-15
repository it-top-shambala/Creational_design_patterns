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
		cout << "¬ведите путь к файлу: "; cin >> path;
		cout << "¬ведите им€ файла: "; cin >> name;
		cout << "проверка на наличие файла" << endl;
		cout << "‘айл создан" << endl;
		return new file(path, name);
	}
};