#include "main.h"
#include  "solution/array/001/001.h"

std::vector<int> twoSum(std::vector<int>& nums, int target);

int main(int argc, char** argv) {
	std::vector<int> nums = { 2,5,5,11 };
	//std::cout << nums.size();
	int target = 10;
	auto res = twoSum(nums, target);
	for(auto i : res) {
		std::cout << i;
	}
}