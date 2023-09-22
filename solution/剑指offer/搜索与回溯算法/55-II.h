#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();

	bool isBalanced(TreeNode* root) {
		if (root == nullptr) return true;
		std::vector<TreeNode*> que;
		que.push_back(root);
		while (!que.empty()) {
			std::vector<TreeNode*> tmp;
			for (auto node : que) {
				int depth_l = dfs(node->left);
				int depth_r = dfs(node->right);
				if (std::abs(depth_l - depth_r) > 1) return false;
				if (node->left != nullptr) tmp.push_back(node->left);
				if (node->right != nullptr) tmp.push_back(node->right);
			}
			que = tmp;
		}
		return true;
	}
private:
	int dfs(TreeNode* node) {
		if (node == nullptr) return 0;
		return std::max(dfs(node->left), dfs(node->right)) + 1;
	}
};

Solution::Solution() {}

Solution::~Solution() {}