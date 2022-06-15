#pragma once

#include "Editor.h"

class File_RTF : public Editor
{
	
public:
	void Encoder()
	{
		cout << "File .RTF is uploaded!" << endl;
		//здесь происходит некая расшифровка содержимого файла, декодировка формата
	}
};