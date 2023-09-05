#pragma once
#include <string>

class Solution
{
public:
	Solution();
	~Solution();
	std::string replaceSpace(std::string s) {
		int cnt = 0, len = s.size();
		for (auto&& c : s) {
			if (c == ' ') cnt++;
		}
		s.resize(len + cnt * 2);
		for (int i = len - 1, j = s.size() - 1; i < j; i--, j--) {
			if (s[i] != ' ') {
				s[j] = s[i];
			} else {
				s[j - 2] = '%';
				s[j - 1] = '2';
				s[j] = '0';
				j -= 2;
			}
		}
		return s;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}