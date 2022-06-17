#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;
using std::string;

//родительский класс для работы с файлом  (для наследования), содержащий все необходимые методы.
//допустим, для того, чтобы работать с документами разных типов, нам нужен только какой-то декодер формата файла, 
//мы будем добавлять новый класс, наследоваться от класса Editor, добавляя этот метод декодирования,
//а в остальном для работы с файлом будут использоваться все те же методы класса-родителя
//тем самым чтобы расширить функционал нашей программы, нам нужно будет лишь добавить новый класс, без глобальных изменений программы
//и добавить в массив новый элемент (в main)

class Editor
{
protected:
	string Path="";
	Editor (string path)
	{
		Path = path;
	}
public:
	Editor() {};
	virtual void Decoder() = 0;
	void Create()
	{
		//cout << "File was succesfully created!" << endl;
	}
	void Open()
	{
		//cout << "File was succesfully opened!" << endl;
	}
	void Save()
	{
		//cout << "File was succesfully saved!" << endl;
	}
	void SaveAs()
	{
		//cout << "File was succesfully saved with a new name!" << endl;
	}
	void Print()
	{
		//cout << "File was succesfully printed!" << endl;
	}
	void Close()
	{
		//cout << "File was succesfully closed!" << endl;
	}
	void Operations()
	{
		int Select = -1;
		cout << R"(
1 - Create
2 - Open
3 - Save
4 - Save As
5 - Print
6 - Close
)";
		cin >> Select;
		switch (Select)
		{
		case 1: Create();
			break;
		case 2: Open();
			break;
		case 3: Save(); 
			break;
		case 4: SaveAs();
			break;
		case 5: Print(); 
			break;
		case 6: Close(); 
			break;
		default:
			//cout<<"Incorrect input!<<endl;
			system("cls");
			Operations();
			break;
		}
	}
	string GetPath() const
	{
		return Path;
	}
};
