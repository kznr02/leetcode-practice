#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
    bool verifyTreeOrder(std::vector<int>& postorder) {
        return recur(postorder, 0, postorder.size() - 1);
    }
private:
    bool recur(std::vector<int>& postorder, int i, int j) {
        if (i >= j) return true;
        int p = i;
        while (postorder[p] < postorder[j]) p++;
        int m = p;
        while (postorder[p] > postorder[j]) p++;
        return p == j && recur(postorder, i, m - 1) && recur(postorder, m, j - 1);
    }
};

Solution::Solution() {}

Solution::~Solution() {}