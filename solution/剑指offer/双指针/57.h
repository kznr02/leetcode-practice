#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	std::vector<int> twoSum(std::vector<int>& nums, int target) {
		int left{ 0 }, right = nums.size() - 1;
		while (left < right) {
			if (target > nums[left] + nums[right]) left++;
			else if (target < nums[left] + nums[right]) right--;
			else return std::vector<int> {nums[left], nums[right]};
		}
		return {};
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}