#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>

using std::cout;
using std::endl;
using std::cin;
using std::string;

#include "Editor.h"
#include "EditorHelper.h"
#include "File_TXT.h"
#include "File_RTF.h"
#include "File_DOC.h"

int main()
{
	string path = "";
	Editor* editor = nullptr;
	EditorHelper* eh = new EditorHelper;
	bool stop=true;
	do
	{
		cout << "<Documents Editor>\n" << endl;
		cout << "Input file path including extension (txt, rtf, doc): "; cin >>path;
		if (!eh->CheckingPath(path))
		{
			cout << "\nThis file extension is not supported yet! Try again!\n" << endl;
			Sleep(2000);
			system("cls");
			continue;
		}
		else
		{
			system("cls");
			editor = eh->CheckingPath(path);
			editor->Decoder();
			stop = editor->Operations();
			if(stop)Sleep(2000);
			system("cls");
		}
	} while (stop);
	cout << "See you later!\n" << endl;
	Sleep(3000);
	delete eh;
	eh = nullptr;
	delete editor;
	editor = nullptr;
}