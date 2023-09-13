#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	int translateNum(int num) {
		int a = 1, b = 1, x, y = num % 10;
		
		while (num > 9) {
			num /= 10;
			x = num % 10;
			int tmp = 10 * x + y;
			int c = (tmp >= 10 && tmp <= 25) ? a + b : a;
			b = a;
			a = c;
			y = x;
		}
		return a;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}