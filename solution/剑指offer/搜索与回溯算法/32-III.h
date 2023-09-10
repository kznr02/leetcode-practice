#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	std::vector<std::vector<int>> levelOrder(TreeNode* root) {
		std::stack<TreeNode*> s1{};
		std::stack<TreeNode*> s2{};
		std::vector<std::vector<int>> ret{};
		bool r{ true };
		if (root == nullptr) return ret;
		s1.push(root);
		while (true) {
			if (s1.empty()) break;
			std::vector<int> tmp1;
			for (auto&& i = s1.size(); i > 0; i--) {
				auto&& node = s1.top();
				s1.pop();
				tmp1.push_back(node->val);
				if (node->left != nullptr) s2.push(node->left);
				if (node->right != nullptr) s2.push(node->right);
			}
			ret.push_back(tmp1);
			if (s2.empty()) break;
			std::vector<int> tmp2;
			for (auto&& i = s2.size(); i > 0; i--) {
				auto&& node = s2.top();
				s2.pop();
				tmp2.push_back(node->val);
				if (node->right != nullptr) s1.push(node->right);
				if (node->left != nullptr) s1.push(node->left);
			}
			ret.push_back(tmp2);
		}
		return ret;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}