#pragma once

#include "WPILib.h"
#include <Buttons/Button.h>

class DPad : Button
{
public:
	DPad(GamePad* gp, int buttonNum);
private:
	GamePad* gp;
	int buttonNum;
};
