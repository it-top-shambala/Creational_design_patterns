#pragma once
#include "file.h"
#include <string>
#include <iostream>
using namespace std;
class program
{
protected:
	program(){}
public:
	virtual file* ProgramFile() = 0;
};