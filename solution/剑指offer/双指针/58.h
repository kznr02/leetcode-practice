#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	std::string reverseWords(std::string s) {
		std::stack<char> st{};
		std::string new_s{};
		for (auto&& i = s.size(); i > 0; i--) {
			if (s[i - 1] == ' ' && !st.empty()) {
				while (!st.empty()) {
					new_s.push_back(st.top());
					st.pop();
				}
				new_s.push_back(' ');
			} else if (s[i - 1] != ' ') {
				st.push(s[i - 1]);
			}
		}
		if (!st.empty()) {
			while (!st.empty()) {
				new_s.push_back(st.top());
				st.pop();
			}
		}
		if (!new_s.empty() && new_s.back() == ' ') {
			new_s.pop_back();
		}
		
		return new_s;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}