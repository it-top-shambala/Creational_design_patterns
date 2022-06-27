

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <io.h>  //библиотека для работы с файлами в плане доступа 
#include <windows.h>
#include "Document.h"

using namespace std;

class FunDoc : virtual Document
{
	//методы работы с документом
public:
	//функция открытия файла с документом
	void Open()
	{}
	//Функция закрытия файла с документом
	void Close()
	{}
	//Функция печати доумента
	void Print()
	{}
	//Функция создания документа 
	void Create()
	{}
	//функция сохранения файла
	void Save()
	{}
	//функция сохранения файла с новым именем
	void Save_as()
	{}
	//Переименование файла
	void Rename()
	{}
};












