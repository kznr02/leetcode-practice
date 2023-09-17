#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	int movingCount(int m, int n, int k) {
		std::vector<std::vector<bool>> visited(m, std::vector<bool>(n, 0));
		return dfs(0, 0, 0, 0, visited, m, n, k);
	}
private:
	int dfs(int i, int j, int si, int sj, std::vector<std::vector<bool>> &visited, int m, int n, int k) {
		if (i >= m || j >= n || k < si + sj || visited[i][j]) return 0;
		visited[i][j] = true;
		return 1 + dfs(i + 1, j, (i + 1) % 10 != 0 ? si + 1 : si - 8, sj, visited, m, n, k) +
			dfs(i, j + 1, si, (j + 1) % 10 != 0 ? sj + 1 : sj - 8, visited, m, n, k);
	}
};

Solution::Solution() {}

Solution::~Solution() {}