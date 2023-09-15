#pragma once
#include <vector>
#include <unordered_map>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <cmath>
#include <iostream>
#include <string>

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(nullptr) {};
};