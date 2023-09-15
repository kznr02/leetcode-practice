#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* dum = new ListNode{ 0 };
		ListNode* dum_cur = dum;
		while (l1 != nullptr || l2 != nullptr) {
			if (l1 == nullptr) {
				dum_cur->next = l2;
				break;
			} else if (l2 == nullptr) {
				dum_cur->next = l1;
				break;
			}
			else if (l1->val <= l2->val) {
				dum_cur->next = l1;
				l1 = l1->next;
			} else {
				dum_cur->next = l2;
				l2 = l2->next;
			}
			dum_cur = dum_cur->next;
		}

		// Âß¼­¸Ä½ø
		/*while (l1 != nullptr && l2 != nullptr) {
			if (l1->val < l2->val) {
				dum_cur->next = l1;
				l1 = l1->next;
			} else {
				dum_cur->next = l2;
				l2 = l2->next;
			}
			dum_cur = dum_cur->next;
		}
		dum_cur->next = l1 != nullptr ? l1 : l2;*/

		return dum->next;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}