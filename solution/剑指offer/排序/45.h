#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	std::string minNumber(std::vector<int>& nums) {
		std::vector<std::string> strs;
		for (int& i : nums) {
			strs.push_back(std::to_string(i));
		}
		quickSort(strs, 0, strs.size() - 1);
		std::string res;
		for (std::string& s : strs) {
			res.append(s);
		}
		return res;
	}
private:
	void quickSort(std::vector<std::string>& strs, int l, int r) {
		if (l >= r) return;
		int i = l, j = r;
		while (i < j) {
			while (strs[j] + strs[l] >= strs[l] + strs[j] && i < j) j--;
			while (strs[i] + strs[l] <= strs[l] + strs[i] && i < j)	i++;
			std::swap(strs[i], strs[j]);
		}
		std::swap(strs[i], strs[l]);
		quickSort(strs, l, i - 1);
		quickSort(strs, i + 1, r);
	}
};

Solution::Solution() {}

Solution::~Solution() {}