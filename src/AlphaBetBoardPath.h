#pragma once
#include "BaseTest.h"
class AlphaBetBoardPath :
	public BaseTest
{
	string alphabetBoardPath(string target);
public:
	virtual string test(const char*);

private:
	vector<string> m_board = { "abcde", "fghij", "klmno", "pqrst", "uvwxy", "z" };
};

