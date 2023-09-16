#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	std::vector<int> exchange(std::vector<int>& nums) {
		int i{ 0 }, j{ nums.size() - 1 };
		while (i<j) {
			while (i < j && nums[i] & 1) i++;
			while (i < j && !(nums[j] & 1)) j--;
			std::swap(nums[i], nums[j]);
		}
		return nums;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}