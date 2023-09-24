#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (p->val > q->val) std::swap(p, q);
		while (root != nullptr) {
			if (root->val < p->val)	root = root->right;
			else if (root->val > q->val) root = root->left;
			else break;
		}
		return root;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}