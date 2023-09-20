#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	bool isStraight(std::vector<int>& nums) {
		if (nums.empty()) return true;
		int l = 0, r = nums.size() - 1;
		quickSort(nums, l, r);
		int joker = 0;
		for (int i = 0; i < 4; i++) {
			if (nums[i] == 0) joker++; // ͳ�ƴ�С������
			else if (nums[i] == nums[i + 1]) return false; // �����ظ�����ǰ���� false
		}
		return nums[4] - nums[joker] < 5; // ����� - ��С�� < 5 ��ɹ���˳��
	}
private:
	void quickSort(std::vector<int>& nums, int l, int r) {
		if (l >= r) return;
		int i = l, j = r;
		while (i < j) {
			while (i < j && nums[j] >= nums[l]) j--;
			while (i < j && nums[i] <= nums[l]) i++;
			std::swap(nums[i], nums[j]);
		}
		std::swap(nums[i], nums[l]);
		quickSort(nums, l, i - 1);
		quickSort(nums, i + 1, r);
	}
};

Solution::Solution() {}

Solution::~Solution() {}