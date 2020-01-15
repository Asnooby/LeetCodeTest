#include "PowerOfFour.h"

bool PowerOfFour::isPowerOfFour(int num)
{
	return 0 < num && 0 == (num & (num - 1)) && num == (num & 0x55555555);
}

int PowerOfFour::test(int argc, ...)
{
	if (1 == argc)
	{
		va_list vl;
		va_start(vl, argc);

		int num = va_arg(vl, int);
		bool bRet = isPowerOfFour(num);

		va_end(vl);

		return bRet;
	}
	return 0;
}
