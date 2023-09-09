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

    bool findNumberIn2DArray(matrix_t<int>& matrix, int target) {
        int i = matrix.size() - 1, j = 0;
        while (i >= 0 && j < matrix[0].size()) {
            if (matrix[i][j] > target) i--;
            else if (matrix[i][j] < target) j++;
            else return true;
        }
        return false;
     }
private:

};

Solution::Solution() {}

Solution::~Solution() {}
