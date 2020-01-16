#pragma once

#include <stdarg.h>
#include <vector>
#include <string>

using namespace std;

class BaseTest
{
public:
	virtual int test(int argc, ...);
	virtual string test(const char*);
	virtual vector<int> test(const vector<int>&);
};

