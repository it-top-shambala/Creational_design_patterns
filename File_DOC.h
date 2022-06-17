#pragma once

#include "Editor.h"

class File_DOC : public Editor
{
	
public:
	File_DOC (string path) : Editor(path) {}
	void Decoder() override
	{
		cout << "File <" << Path << "> is chosen! Object DOC is working!" << endl;
		//something magical is happening here!!!
	}
};