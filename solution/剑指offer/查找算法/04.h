#pragma once
#include <vector>
#include <unordered_map>

class Solution
{
public:
	Solution();
	~Solution();

	template<typename T>
	using matrix_t = std::vector<std::vector<T>>;

	std::unordered_map<int, bool> map;
	bool findNumberIn2DArray(matrix_t<int>& matrix, int target) {
		for (auto&& line : matrix) {
			for (auto&& n : line) {
				map[n] = true;
			}
		}

		return map[target];
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}
