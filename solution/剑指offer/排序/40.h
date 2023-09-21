#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();

	std::vector<int> getLeastNumbers(std::vector<int>& arr, int k) {
		if (k == 0 || arr.empty() || arr.size() < k) return {};
		return quickSort(arr, k, 0, arr.size() - 1);
	}
private:
	std::vector<int> quickSort(std::vector<int>& arr, int k, int l, int r) {
		if (l >= r) return;
		int i = l, j = r;
		while (i < j) {
			while (i < j && arr[j] >= arr[l]) j--;
			while (i < j && arr[i] <= arr[l]) i++;
			std::swap(arr[i], arr[j]);
		}
		std::swap(arr[i], arr[l]);
		if(i>k) return quickSort(arr, k, l, i - 1);
		if (i < k) return quickSort(arr, k, i + 1, r);
		std::vector<int> res{};
		res.assign(std::cbegin(arr), std::cbegin(arr) + k);
		return res;
	}
};

Solution::Solution() {}

Solution::~Solution() {}