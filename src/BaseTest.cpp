#include "BaseTest.h"

int BaseTest::test(int argc, ...)
{
	return 0;
}

vector<int> BaseTest::test(const vector<int>&)
{
	return vector<int>();
}

string BaseTest::test(const char*)
{
	return string();
}