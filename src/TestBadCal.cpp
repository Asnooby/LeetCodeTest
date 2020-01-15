#include "TestBadCal.h"

int TestBadCal::brokenCalc(int X, int Y)
{
    if (X >= Y)
    {
        return X - Y;
    }
    else
    {
        unsigned int nRet = 0;
        while (Y > X)
        {
            nRet += 1 + (1 & Y);
            Y = (Y + (1 & Y)) >> 1;
        }
        return nRet + X - Y;
    }
}

int TestBadCal::test(int argc, ...)
{
    if (2 == argc)
    {
        va_list vl;
        va_start(vl, argc);

        int X = va_arg(vl, int);
        int Y = va_arg(vl, int);
        return brokenCalc(X, Y);

        va_end(vl);
    }
    return 0;
}
