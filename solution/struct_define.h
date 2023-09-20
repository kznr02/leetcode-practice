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
	TreeNode() : val(0), left(nullptr), right(nullptr) {};
	TreeNode(int x, TreeNode* left, TreeNode* right) :val(x), left(left), right(right) {};
};

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(nullptr) {};
};

struct Node
{
	int val;
	Node* left;
	Node* right;

	Node() {};
	Node(int _val) : val(_val), left(nullptr), right(nullptr) {};
	Node(int _val, Node* left, Node* right) :val(_val), left(nullptr), right(nullptr) {};
};