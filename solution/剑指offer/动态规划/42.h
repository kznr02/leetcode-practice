#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	int maxSubArray(std::vector<int>& nums) {
		int res = nums[0];
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i - 1] > 0) nums[i] += nums[i - 1];
			if (nums[i] > res) res = nums[i];
		}
		return res;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}