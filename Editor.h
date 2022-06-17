#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

//������������ ����� ��� ������ � ������  (��� ������������), ���������� ��� ����������� ������.
//��������, ��� ����, ����� �������� � ����������� ������ �����, ��� ����� ������ �����-�� ������� ������� �����, 
//�� ����� ��������� ����� �����, ������������� �� ������ Editor, �������� ���� ����� �������������,
//� � ��������� ��� ������ � ������ ����� �������������� ��� �� �� ������ ������-��������
//��� ����� ����� ��������� ���������� ����� ���������, ��� ����� ����� ���� �������� ����� �����, ��� ���������� ��������� ���������
//� �������� � ������ ����� ������� (� main)

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
	bool Operations()
	{
		int Select = -1;
		cout << R"(
1 - Create
2 - Open
3 - Save
4 - Save As
5 - Print
6 - Close
0 - Exit
)";
		cin >> Select;
		switch (Select)
		{
		case 1: Create(); return true;
			break;
		case 2: Open(); return true;
			break;
		case 3: Save(); return true;
			break;
		case 4: SaveAs(); return true;
			break;
		case 5: Print(); return true;
			break;
		case 6: Close(); return true;
			break;
		case 0: return false;
			break;
		default:
			//cout<<"Incorrect input!<<endl;
			return true;
			break;
		}
	}
};
