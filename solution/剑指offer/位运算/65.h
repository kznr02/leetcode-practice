#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
    int encryptionCalculate(int dataA, int dataB) {
        while (dataB != 0) {
            int c = (unsigned int)(dataA & dataB) << 1;
            dataA ^= dataB;
            dataB = c;
        }
        return dataA;
    }
};

Solution::Solution() {}

Solution::~Solution() {}