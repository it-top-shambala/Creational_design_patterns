#pragma once

#include "Editor.h"

class File_RTF : public Editor
{
	
public:
	void Decoder()
	{
		cout << "File .RTF is uploaded and decoded!" << endl;
		//здесь происходит некая расшифровка содержимого файла, декодировка формата
	}
};