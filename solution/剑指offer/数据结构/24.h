#pragma once
#include "06.h"
class Solution
{
public:
	Solution() {};
	~Solution() {};
	ListNode* reverList(ListNode* head) {
		ListNode* cur = head, * pre = nullptr;
		while (cur != nullptr) {
			ListNode* tmp = cur->next;
			cur->next = pre;
			pre = cur;
			cur = tmp;
		}
		return pre;
	}
};
