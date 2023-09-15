#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
		ListNode* p_A{ headA }, * p_B{ headB };

		while (p_A != p_B) {
			p_A = p_A != nullptr ? p_A->next : headB;
			p_B = p_B != nullptr ? p_B->next : headA;
		}
		return p_A;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}