#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	std::vector<std::vector<int>> pathSum(TreeNode* root, int target) {
		dfs(root, target);
		return res;
	}
private:
	int sum = 0;
	std::vector<std::vector<int>> res{};
	std::vector<int>path{};
	void dfs(TreeNode* node, int target) {
		if (node == nullptr) return;
		sum += node->val;
		path.push_back(node->val);
		if (node->left == nullptr && node->right == nullptr) {
			if (sum == target) {
				sum -= node->val;
				res.push_back(path);
				path.pop_back();
				return;
			} else {
				sum -= node->val;
				path.pop_back();
				return;
			}
		}
		if (node->left != nullptr) dfs(node->left, target);
		if (node->right != nullptr) dfs(node->right, target);
		sum -= node->val;
		path.pop_back();
		return;
	}

	void recur(TreeNode* root, int tar) {
		if (root == nullptr) return;
		path.push_back(root->val);
		tar -= root->val;
		if (tar == 0 && root->left == nullptr && root->right == nullptr)
			res.push_back(path);
		recur(root->left, tar);
		recur(root->right, tar);
		path.pop_back();
	}
};

Solution::Solution() {}

Solution::~Solution() {}