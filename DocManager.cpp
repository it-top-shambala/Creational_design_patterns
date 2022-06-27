
// DocManager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Manager.h"
#include <vector> //библиотека содержащая класс вектор

void Help()
{
	cout << R"(
Работа с документом:
create  создать документ
open    открыть документ
save    сохранить документ
save_n  сохранить документ с новым именем
print   напечатать документ
close   закрыть документ

help  вызов функции help
exit  закончить работу)" << endl;
}
int main()
{
	setlocale(LC_ALL, "rus");
	vector<string> Manager = {
"create",     //создать документ
"open",       //открыть документ
"save",       //сохранить документ
"save_as",     //сохранить документ с новым именем
"print",      //напечатать документ
"close",      //закрыть документ
"help",       //вывод на экран список команд
"exit" };     //закончить работу с документом

	Help();
	cout << endl;
	int com = 0;//номер задания в векторе заданий
	do
	{
		Document Doc;
		com = 1;//позиция команды в векторе команд
		string task;//команда
		cout << "Выберите команду для работы с документом: ";
		getline(cin, task);// ввод команды

		for (vector<string>::iterator Iter = Manager.begin(); Iter != Manager.end(); Iter++)
		{
			if (*Iter != task)
			{
				com++;
				continue;
			}

			break;
		};
		if (com == 7) { Help();  continue; }
		if (com == 8) { cout << "Окончание работы!"; return 1; }
		if (com < 1 || com > 8) { cout << "Такой команды не существует!" << endl; continue; };
		FunDoc Fun;
		if (com == 1) { Fun.Create(); continue; };
		if (com == 2) { Fun.Open(); continue; };
		if (com == 3) { Fun.Save(); continue; }
		if (com == 4) { Fun.Save_as(); continue; }
		if (com == 5) { Fun.Print(); continue; }
		if (com == 6) { Fun.Close(); continue; }

	} while (TRUE);
}



