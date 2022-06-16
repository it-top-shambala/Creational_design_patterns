#pragma once

#include "Editor.h"

class File_DOC : public Editor
{
	
public:
	void Decoder()
	{
		cout << "File .DOC is uploaded and decoded!" << endl;
		//здесь происходит некая расшифровка содержимого файла, декодировка формата
	}
};