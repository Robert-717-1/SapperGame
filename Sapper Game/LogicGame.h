#include "Field.h"
#include <ctime>
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class LogicGame
{
public:
	
	bool EmptyCells(array<array<String^>^>^ arrCells, int str, int column) {
		if (arrCells[str][column] == " ")
			return true;
		else
			return false;
	}

	bool CheckBomb(array<array<String^>^>^ arrCells, int str, int column) {
		if (arrCells[str][column] == "mine")
			return true;
		else
			return false;
	}
};