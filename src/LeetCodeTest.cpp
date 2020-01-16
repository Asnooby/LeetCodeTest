// LeetCodeTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include "TestBadCal.h"
#include "UncompressCode.h"
#include "PowerOfFour.h"
#include "AlphaBetBoardPath.h"

using namespace std;
#define safe_delete(obj) if (obj) { delete obj; obj = NULL;}

int main()
{
    BaseTest* test = NULL;
    test = new TestBadCal();
    int i = test->test(2, 3, 10);
    safe_delete(test);

    test = new UncompressCode();
    vector<int> vRet = test->test({ 1, 2, 3, 4 });
    safe_delete(test);

    test = new PowerOfFour();
    bool bRet = test->test(1, 5);
    bRet = test->test(1, 16);
    safe_delete(test);

    test = new AlphaBetBoardPath();
    string sRet = test->test("leet");
    sRet = test->test("zbz");
    safe_delete(test);

    std::cout << "Hello World!\n";
}
