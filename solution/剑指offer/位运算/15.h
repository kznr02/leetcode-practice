#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	int hammingWeight(uint32_t n) {
		int cnt{ 0 };
		while (n != 0) {
			cnt += n & 1;
			n >>= 1;
		}
		return cnt;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}