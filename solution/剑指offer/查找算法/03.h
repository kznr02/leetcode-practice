#pragma once
#include <vector>
#include <unordered_map>

class Solution
{
public:
	Solution();
	~Solution();

	int findRepeatNumber(std::vector<int>& nums) {
		std::unordered_map<int, bool> map;
		for (int num : nums) {
			if (map[num]) return num;
			map[num] = true;
		}
		return -1;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}