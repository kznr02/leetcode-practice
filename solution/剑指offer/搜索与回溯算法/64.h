#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	int mechanicalAccumulator(int target) {
		target > 1 && (target += mechanicalAccumulator(target - 1)); // �߼�������Ķ�·ЧӦ��
		return target;
	}
};

Solution::Solution() {}

Solution::~Solution() {}