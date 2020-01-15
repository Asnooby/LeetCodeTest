#include "UncompressCode.h"

vector<int> UncompressCode::getUncompressCode(const vector<int>& nums)
{
    vector<int> vRet;
    for (unsigned int i = 0; i < nums.size(); i += 2)
    {
        const int& a = nums[i];
        const int& b = nums[i + 1];
        for (int j = 0; j < a; j++)
        {
            vRet.push_back(b);
        }
    }
    return vRet;
}

vector<int> UncompressCode::test(const vector<int>& nums)
{
    return getUncompressCode(nums);
}
