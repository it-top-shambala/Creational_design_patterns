#pragma once

#include "Editor.h"

class File_TXT : public Editor
{
	
public:
	void Encoder()
	{
		cout << "File .TXT is uploaded!" << endl;
		//здесь происходит некая расшифровка содержимого файла, декодировка формата
	}
};