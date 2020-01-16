#include "AlphaBetBoardPath.h"

string AlphaBetBoardPath::alphabetBoardPath(string target)
{
	string sRet;
	const unsigned char uLen = 5;
	const unsigned char uAscLast = 'a';
	unsigned char uXLast = 0;
	unsigned char uYLast = 0;

	for (auto iter = target.begin(); iter != target.end(); iter++)
	{
		const unsigned char uX = (*iter - uAscLast) % uLen;
		const unsigned char uY = (*iter - uAscLast - uX) / uLen;
		if (uYLast < uY)
		{
			sRet.append(uY - uYLast, 'D');
		}
		else if (uYLast > uY)
		{
			sRet.append(uYLast - uY, 'U');
		}
		if (uXLast < uX)
		{
			sRet.append(uX - uXLast, 'R');
		}
		else if (uXLast > uX)
		{
			sRet.append(uXLast - uX, 'L');
		}
		sRet += '!';
		uXLast = uX;
		uYLast = uY;
	}
	return sRet;
}


string AlphaBetBoardPath::test(const char* target)
{
	return alphabetBoardPath(target);
}
