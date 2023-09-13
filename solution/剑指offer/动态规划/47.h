#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	int maxValue(std::vector<std::vector<int>>& grid) {
		int m = grid.size(), n = grid[0].size();
		for (int&& i = 0; i < m; i++) {
			for (int&& j = 0; j < n; j++) {
				if (i == 0 && j == 0) continue;
				else if (i == 0) {
					grid[i][j] = grid[i][j - 1] + grid[i][j];
				} else if (j == 0) {
					grid[i][j] = grid[i - 1][j] + grid[i][j];
				} else {
					grid[i][j] = std::max(grid[i - 1][j], grid[i][j - 1]) + grid[i][j];
				}
			}
		}
		return grid[m-1][n-1];
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}