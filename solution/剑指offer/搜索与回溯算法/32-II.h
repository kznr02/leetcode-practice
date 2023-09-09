#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	std::vector<std::vector<int>> levelOrder(TreeNode* root) {
		std::queue<TreeNode*> m{};
		std::vector<std::vector<int>> ret{};
		if (root == nullptr) return ret;
		m.push(root);
		while (!m.empty()) {
			std::vector<int> tmp{};
			for (auto&& i = m.size(); i > 0; i--) {
				TreeNode* t = m.front();
				m.pop();
				tmp.push_back(t->val);
				if (t->left != nullptr) m.push(t->left);
				if (t->right != nullptr) m.push(t->right);
			}
			ret.push_back(tmp);
		}
		return ret;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}