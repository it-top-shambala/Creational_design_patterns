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

int CheckingChoice(string choice)
{
	if (choice == "txt") return 0;
	else if (choice == "rtf") return 1;
	else if (choice == "doc") return 2;
	else return - 1;
}

int main()
{
	string choice = "";
	int select = -1;
	Editor* editor[3] = { new File_TXT, new File_RTF, new File_DOC };
	do
	{
		cout << "<Documents Editor>\n" << endl;
		cout << "Input file extension (txt, rtf, doc): "; cin >> choice;
		if (CheckingChoice(choice) == -1)
		{
			cout << "\nThis file extension is not supported yet! Try again!\n" << endl;
			Sleep(3000);
			system("cls");
			continue;
		}
		else
		{
			system("cls");
			int key = CheckingChoice(choice);
			editor[key]->Decoder();
			cout << R"(
1 - Create
2 - Open
3 - Save
4 - Save As
5 - Print
6 - Close
0 - Exit
)";
			cin >> select;
			switch (select)
			{
			case 1:
				editor[key]->Create();
				break;
			case 2:
				editor[key]->Open();
				break;		
			case 3:
				editor[key]->Save();
				break;
			case 4:
				editor[key]->SaveAs();
				break;
			case 5 :
				editor[key]->Print();
				break;
			case 6:
				editor[key]->Close();
				break;
			case 0:
				break;
			default:
				//cout<<"Incorrect input!<<endl;
				break;
			}
			Sleep(3000);
			system("cls");
		}
	} while (select != 0);
	system("cls");
	cout << "See you later!\n" << endl;
	Sleep(3000);

	for (int i = 0; i < 3; i++)
	{
		delete editor[i];
		editor[i] = nullptr;
	}
}

