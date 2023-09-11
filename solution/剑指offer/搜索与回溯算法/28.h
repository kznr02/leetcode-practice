#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	bool isSymmetric(TreeNode* root) {
		return (root == nullptr) || recur(root->left, root->right);
	}
private:
	constexpr bool recur(TreeNode* A, TreeNode* B) noexcept {
		if (A == nullptr && B == nullptr) return true;
		if (A == nullptr && B != nullptr) return false;
		if (B == nullptr && A != nullptr) return false;
		if (A->val == B->val) {
			return recur(A->left, B->right) && recur(A->right, B->left);
			
		} else {
			return false;
		}
	}
};

Solution::Solution() {}

Solution::~Solution() {}