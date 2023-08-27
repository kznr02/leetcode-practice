#include "026.h"

//	自写暴力解法
int removeDuplicates(std::vector<int>& nums) {
	for (int i = 0; i < nums.size() - 1; i++) {
		for (int i : nums) {
			std::cout << i << ", ";
		}
		std::cout << std::endl;
		if (nums[i] == nums[i + 1]) {
			nums.erase(nums.begin() + i + 1);
			i--;
		} else {
			continue;
		}
		
	}
	return nums.size();
}

//	力扣加加
int solution1(std::vector<int>& nums) {
	if (nums.empty()) return 0;
	int fast{0}, slow{0};
	while (fast != nums.size()) {
		if (nums[fast] == nums[slow]) fast++;
		else {
			slow++;
			nums[slow] = nums[fast];
			fast++;
		}
	}
	return slow + 1;
}