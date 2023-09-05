#pragma once
#include <string>
class Solution
{
public:
	Solution();
	~Solution();
	std::string reverseLeftWords(std::string s, int n) {
		auto&& tmp = s.substr(0, 2);
		for (int i = 0, j = n; j < s.size(); j++, i++) {
			s[i] = s[j];
		}
		for (int i = s.size() - n, j = 0; j < n; i++, j++) {
			s[i] = tmp[j];
		}

		return s;
 	}

	std::string slice(std::string s, int n) {
		return s.substr(n, s.size()) + s.substr(0, n);
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}