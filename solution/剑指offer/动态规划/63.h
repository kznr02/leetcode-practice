#pragma once
#include "../../struct_define.h"	

class Solution
{
public:
	Solution();
	~Solution();
	int maxProfit(std::vector<int>& prices) {
		int cost = INT16_MAX, profit = 0;
		for (int& price : prices) {
			cost = std::min(cost, price);
			profit = std::max(profit, price - cost);
		}
		return profit;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}