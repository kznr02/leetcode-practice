#pragma once
#include <unordered_map>
#include <vector>

class Solution
{
public:
	Solution();
	~Solution();

	int search(std::vector<int>& nums, int target) {
		std::unordered_map<int, int> map;
		for (auto&& num : nums) {
			map[num] += 1;
		}
		return map[target];
	}

	//	性能有点拉跨，原因暂未知
	int binary_search(std::vector<int>& nums, int target) {
		int i = 0, j = nums.size() - 1;
		while (i<=j) {
			int m = (i + j) / 2;
			if (nums[m] <= target) i = m + 1;
			else {
				i = m - 1;
			}
		}
		int right = i;
		if (j > 0 && nums[j] != right) return 0;
		i = 0; j = nums.size() - 1;
		while (i<=j) {
			int m = (i + j) / 2;
			if (nums[m] < target) i = m + 1;
			else {
				j = m - 1;
			}
		}
		int left = j;
		return right - left - 1;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}