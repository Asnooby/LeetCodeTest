#pragma once

#include <stdarg.h>
#include <vector>

using namespace std;

class BaseTest
{
public:
	virtual int test(int argc, ...);
	virtual vector<int>test(const vector<int>&);
};

