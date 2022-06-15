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

public:
	virtual void Encoder() = 0;

	void Create()
	{
		cout << "File was succesfully created!" << endl;
	}
	void Open()
	{
		cout << "File was succesfully opened!" << endl;
	}
	void Save()
	{
		cout << "File was succesfully saved!" << endl;
	}
	void SaveAs()
	{
		cout << "File was succesfully saved with a new name!" << endl;
	}
	void Print()
	{
		cout << "File was succesfully printed!" << endl;
	}
	void Close()
	{
		cout << "File was succesfully closed!" << endl;
	}
};
