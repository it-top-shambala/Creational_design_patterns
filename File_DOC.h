#pragma once

#include "Editor.h"

class File_DOC : public Editor
{
	
public:
	File_DOC (string path) : Editor(path) {}
	void Decoder() override
	{
		cout << "File <" << Path << "> is uploaded and decoded! Object DOC is working!" << endl;
		//something magical is happening here!!!
	}
};