#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	Node* treeToDoublyList(Node* root) {
		if (root == nullptr) return root;
		dfs(root);
		head->left = pre;
		pre->right = head;
		return head;
	}
private:
	Node* pre, * head;
	void dfs(Node* cur) {
		if (cur == nullptr) return;
		dfs(cur->left);
		if (pre != nullptr) pre->right = cur;
		else head = cur;
		cur->left = pre;
		pre = cur;
		dfs(cur->right);
	}
};

Solution::Solution() {}

Solution::~Solution() {}