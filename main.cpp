#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>

using std::cout;
using std::endl;
using std::cin;
using std::string;

#include "Editor.h"
#include "File_TXT.h"
#include "File_RTF.h"
#include "File_DOC.h"

int Element(string path)
{
	if (path == "txt") return 0;
	else if (path == "rtf") return 1;
	else if (path == "doc") return 2;
	else return - 1;
}

int main()
{
	string choice = "";
	Editor* editor[3] = { new File_TXT, new File_RTF, new File_DOC };
	do
	{
		cout << "<Documents Editor>\n" << endl;
		cout << "Input File Extension (txt, rtf, doc): "; cin >> choice;
		if (Element(choice) == -1)
		{
			cout << "\nThis File Extension is not supported yet! Try again!\n" << endl;
			Sleep(3000);
			system("cls");
			continue;
		}
		else
		{
			system("cls");
			int key = Element(choice);
			editor[key]->Encoder();
			cout << R"(
1 - Create
2 - Open
3 - Save
4 - Save As
5 - Print
6 - Close
0 - Exit
)";
			cin >> choice;
			if (choice == "1")editor[key]->Create();
			else if (choice == "2")editor[key]->Open();
			else if (choice == "3")editor[key]->Save();
			else if (choice == "4")editor[key]->SaveAs();
			else if (choice == "5")editor[key]->Print();
			else if (choice == "6")editor[key]->Close();
			else if (choice == "0")break;
			Sleep(3000);
			system("cls");
		}
	} while (choice != "0");
	system("cls");
	cout << "See you later!\n" << endl;
	Sleep(3000);

	for (int i = 0; i < 3; i++)
	{
		delete editor[i];
		editor[i] = nullptr;
	}
}

