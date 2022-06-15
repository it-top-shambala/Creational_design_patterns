#pragma once

#include "Editor.h"

class File_DOC : public Editor
{
	
public:
	void Encoder()
	{
		cout << "File .DOC is uploaded!" << endl;
		//здесь происходит некая расшифровка содержимого файла, декодировка формата
	}
};