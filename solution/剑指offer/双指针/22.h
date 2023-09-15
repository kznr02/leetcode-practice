#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	
	ListNode* getKthFromEnd(ListNode* head, int k) {
		if (head == nullptr || head->next == nullptr) return head;
		ListNode* prev = head, * tail = head;
		int cnt{ 1 };
		while (tail->next != nullptr) {
			cnt++;
			if (cnt == k);
			tail = tail->next;
			prev = prev->next;
		}
		return prev;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}