#pragma once
#include "BaseTest.h"

class TestBadCal : public BaseTest
{
public:
	virtual int test(int num, ...);

private:
	int brokenCalc(int X, int Y);
};

