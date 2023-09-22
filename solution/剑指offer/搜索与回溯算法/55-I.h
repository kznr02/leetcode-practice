#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	int dfs(TreeNode* root) {
		if (root == nullptr) return 0;
		return std::max(dfs(root->left), dfs(root->right)) + 1;
	}

    int bfs(TreeNode* root) {
        if (root == nullptr) return 0;
        std::vector<TreeNode*> que;
        que.push_back(root);
        int res = 0;
        while (!que.empty()) {
            std::vector<TreeNode*> tmp;
            for (TreeNode* node : que) {
                if (node->left != nullptr) tmp.push_back(node->left);
                if (node->right != nullptr) tmp.push_back(node->right);
            }
            que = tmp;
            res++;
        }
        return res;
    }
};

Solution::Solution() {}

Solution::~Solution() {}