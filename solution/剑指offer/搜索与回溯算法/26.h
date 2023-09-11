#pragma once
#include "../../struct_define.h"
class Solution
{
public:
	Solution();
	~Solution();
	bool isSubStructure(TreeNode* A, TreeNode* B) {
		return (A != nullptr && B != nullptr) && (recur(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B));
	}
private:
	bool recur(TreeNode* A, TreeNode* B) {
		if (B == nullptr) return true;
		if (A == nullptr || A->val != B->val) return false;
		return recur(A->left, B->left) && recur(A->right, B->right);
	}
};

Solution::Solution() {}

Solution::~Solution() {}