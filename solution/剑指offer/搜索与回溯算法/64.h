#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	int mechanicalAccumulator(int target) {
		target > 1 && (target += mechanicalAccumulator(target - 1)); // 逻辑运算符的短路效应。
		return target;
	}
};

Solution::Solution() {}

Solution::~Solution() {}