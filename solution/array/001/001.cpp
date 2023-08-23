#include "001.h"

std::vector<int> twoSum(std::vector<int>& nums, int target) {
	int i = 0;
	int j = 1;
	int flag = 0;
	std::vector<int> res = {};
	for (i = 0; i < nums.size() - 1; i++) {
		for (j = i + 1; j < nums.size(); j++) {
			if (nums[i] + nums[j] == target) {
				res.push_back(i);
				res.push_back(j);
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	return res;
}