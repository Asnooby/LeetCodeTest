#pragma once
#include "BaseTest.h"

class UncompressCode :
	public BaseTest
{
	vector<int> getUncompressCode(const vector<int>&);
public:
	virtual vector<int>test(const vector<int>&);
};

