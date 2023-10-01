#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	double myPow(double x, int n) {
		if (x == 0.0f) return 0;
		long b = n;
		double res = 1.0f;
		if (b < 0) {
			x = 1 / x;
			b = -b;
		}
		while (b>0) {
			if ((b & 1) == 1) res *= x;
			x *= x;
			b >>= 1;
		}
		return res;
	}
private:
};

Solution::Solution() {}

Solution::~Solution() {}