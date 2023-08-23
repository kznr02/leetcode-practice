#include "main.h"
#include  "solution/array/001/001.h"

int main(int argc, char** argv) {
	std::vector<int> nums = { 2,5,5,11 };
	//std::cout << nums.size();
	int target = 10;
	auto res = best_solution(nums, target);
	for(auto i : res) {
		std::cout << i;
	}
}