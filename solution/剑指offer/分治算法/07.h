#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	TreeNode* deduceTree(std::vector<int>& preorder, std::vector<int>& inorder) {
		this->preorder = preorder;
		for (int i = 0; i < inorder.size(); i++) {
			dic[inorder[i]] = i;
		}
		return recur(0, 0, inorder.size() - 1);
	}
private:
	std::vector<int> preorder;
	std::unordered_map<int, int> dic;
	TreeNode* recur(int root, int left, int right) {
		if (left > right) return nullptr;
		TreeNode* node = new TreeNode(preorder[root]);
		int i = dic[preorder[root]];
		node->left = recur(root + 1, left, i - 1);
		node->right = recur(root + i - left + 1, i + 1, right);
		return node;
	}
};

Solution::Solution() {}

Solution::~Solution() {}