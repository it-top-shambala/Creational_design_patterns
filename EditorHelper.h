#pragma once

#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

#include "Editor.h"
#include "File_TXT.h"
#include "File_RTF.h"
#include "File_DOC.h"

class EditorHelper : public Editor
{
	void Decoder() override {};
public:
	Editor* CheckingPath(string path)
	{
		string extension = "";
		int pos = path.find(".");
		extension = path.substr(pos + 1, path.size());
		if (extension == "txt") return new File_TXT(path);
		else if (extension == "rtf") return new File_RTF(path);
		else if (extension == "doc") return new File_DOC(path);
		else return nullptr;
	}
};