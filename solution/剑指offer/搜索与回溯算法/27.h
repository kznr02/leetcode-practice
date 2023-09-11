#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	TreeNode* mirrorTree(TreeNode* root) {
		recur(root);
		return root;
	}

	TreeNode* mirrorTree_simplify(TreeNode* root) {
		if (root == nullptr) return nullptr;
		TreeNode* tmp = root->left;
		root->left = mirrorTree_simplify(root->right);
		root->right = mirrorTree_simplify(tmp);
		return root;
	}
private:
	constexpr void recur(TreeNode* node) noexcept {
		if (node == nullptr) return;
		recur(node->left);
		recur(node->right);
		TreeNode* tmp = node->left;
		node->left = node->right;
		node->right = tmp;
	}
};

Solution::Solution() {}

Solution::~Solution() {}