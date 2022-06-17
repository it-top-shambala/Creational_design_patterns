#pragma once

#include "Editor.h"

class File_TXT : public Editor
{
	
public:
	File_TXT (string path) : Editor(path) {}
	void Decoder() override
	{
		cout << "File <" << Path << "> is uploaded and decoded! Object TXT is working!" << endl;
		//something magical is happening here!!!
	}
};