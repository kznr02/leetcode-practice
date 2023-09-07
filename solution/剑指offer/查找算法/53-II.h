#pragma once
#include <vector>

class Solution
{
public:
	Solution();
	~Solution();
	int missingNumber(std::vector<int>& nums) {
		int idx{ 0 };
		for (auto&& num : nums) {
			if (idx == num) idx++;
			else break;
		}
		return idx;
	}

	int binary(std::vector<int>& nums) {
		int i = 0, j = nums.size() - 1;
		while (i<j) {
			int m = (i + j) / 2;
			if (nums[m] = m) i = m + 1;
			else j = m - 1;
		}
		return i;
	}

private:

};

Solution::Solution() {}

Solution::~Solution() {}