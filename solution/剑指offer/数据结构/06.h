#pragma once
#include <iostream>
#include <vector>
#include <stack>

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(NULL){}
};

class Solution {
public:
	std::vector<int> reversePrint(ListNode* head) {
		recur(head);
		return res;
	}
private:
	std::vector<int> res;
	void recur(ListNode* head) {
		if (head == nullptr) return;
		recur(head->next);
		res.push_back(head->val);
	}
};

class Solution2
{
public:
	Solution2();
	~Solution2();
	std::vector<int> reversePrint(ListNode* head) {
		std::stack<int> s;
		while (head!=nullptr) {
			s.push(head->val);
			head = head->next;
		}
		std::vector<int> res;
		while (!s.empty()) {
			res.push_back(s.top());
			s.pop();
		}
		return res;
	}
};
