#include <iostream>
#include "open.h"
#include "create.h"
#include <string>
using namespace std;
file* creator(program* cr)
{
	return cr->ProgramFile();
}
int main() 
{
	file* File;
	while (1)
	{
		char str;
		cout << "���� " << endl
			<< "cr  - c������� �����" << endl
			<< "op  - �������� �����" << endl
			<< "sv  - ���������� �����" << endl
			<< "sa  - ���������� ����� ���..." << endl
			<< "pr  - ������ �����" << endl
			<< "cl  - �������� �����" << endl;
		cin >> str;
		switch (str)
		{
		case 'cr':
		{
			File=creator(new create());
			break;
		}
		case 'op':
		{
			
			File=creator(new open());
			break;
			
		}
		case 'sv':
		{
			File->save();
			break;
		}
		case 'sa':
		{
			File->saveas();
			break;
		}
		case 'pr':
		{
			File->print();
			break;
		}
		case 'cl':
		{
			File->close();
			break;
		}
		default:
			break;
		}
   }
	
	
}
