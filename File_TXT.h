#pragma once

#include "Editor.h"

class File_TXT : public Editor
{
	
public:
	void Decoder()
	{
		cout << "File .TXT is uploaded and decoded!" << endl;
		//здесь происходит некая расшифровка содержимого файла, декодировка формата
	}
};