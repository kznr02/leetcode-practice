#pragma once
#include <vector>
#include <unordered_map>
#include <map>
#include <queue>
#include <stack>
#include <cmath>

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};