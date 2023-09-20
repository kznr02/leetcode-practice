#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	int kthLargest(TreeNode* root, int k) {
		if (root == nullptr) return 0;
		this->k = k;
		dfs(root);
		return nodes[nodes.size() - k];
	}
private:
	int k{}, res{};
	std::vector<int> nodes{};
	void dfs(TreeNode* node) {
		if (node == nullptr) return;
		dfs(node->left);
		nodes.push_back(node->val);
		dfs(node->right);
	}

	void dfs2(TreeNode* node) {
		if (node == nullptr) return;
		dfs2(node->right);
		if (k == 0) return;
		if (--k == 0) res = node->val;
		dfs2(node->left);
	}
};

Solution::Solution() {}

Solution::~Solution() {}