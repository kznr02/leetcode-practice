#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	std::vector<int> levelOrder(TreeNode* root) {
		std::vector<int> elements{};
		if (root == nullptr) return elements;
		std::queue<TreeNode*> tq{};
		tq.push(root);
		while (!tq.empty()) {
			TreeNode* tmp = tq.front();
			tq.pop();
			elements.push_back(tmp->val);
			if (tmp->left != nullptr) tq.push(tmp->left);
			if (tq.front() != nullptr) {
				elements.push_back(tq.front()->val);
				tq.push(tq.front()->left);
				tq.push(tq.front()->right);
				tq.pop();
			} else {
				tq.pop();
			}
		}
		return elements;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}