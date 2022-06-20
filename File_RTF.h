#pragma once

#include "Editor.h"

class File_RTF : public Editor
{
	
public:
	File_RTF (string path) : Editor(path) {}
	void Decoder() override
	{
		cout << "File <" << Path << "> is chosen! Object RTF is working!" << endl;
		//something magical is happening here!!!
	}
};