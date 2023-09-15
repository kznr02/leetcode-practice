#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	ListNode* deleteNode(ListNode* head, int val) {
		ListNode *p1 = head, *p2 = head->next;
		while (p2 != nullptr) {
			if (head->val == val) {
				return head->next;
			}
			if (p2->val == val) {
				p1->next = p2->next;
				break;
			} else {
				p1 = p2;
				p2 = p2->next;
			}
		}
		return head;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}