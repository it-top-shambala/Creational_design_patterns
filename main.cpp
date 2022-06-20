#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include "Editor.h"
#include "EditorHelper.h"
#include "File_TXT.h"
#include "File_RTF.h"
#include "File_DOC.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	string path = "";
	Editor* editor = nullptr;
	EditorHelper* editorhelper = new EditorHelper;
	bool stop=true;
	int select = -1;
	do
	{
		cout << "<Documents Editor>\n" << endl;
		cout << "Input file path including extension (txt, rtf, doc): "; cin >>path;
		if (!editorhelper->CheckingPath(path))
		{
			cout << "\nThis file extension is not supported yet! Try again!\n" << endl;
			Sleep(2000);
			system("cls");
			continue;
		}
		else
		{
			system("cls");
			editor = editorhelper->CheckingPath(path);
			editor->Decoder();
			cout << endl;
			do
			{
				cout << "Working with file <" << editor->GetPath() << ">" << endl;
				editor->Operations();
				cout << "\nContinue working (1), choose another file (2) or exit (0)? "; cin >> select;
				if (select == 0) stop = false;
				if (select == 2) 
				{
					delete editor; stop = false;
				}
				if (select < 0 || select>2) 
				{
					cout << "Incorrect input!" << endl; Sleep(2000);
				}
				system("cls");
			} while (stop);
			if (select == 2) stop = true;
			system("cls");
		}
	} while (stop);
	cout << "See you later!\n" << endl;
	Sleep(3000);
	delete editorhelper;
	editorhelper = nullptr;
	delete editor;
	editor = nullptr;
}