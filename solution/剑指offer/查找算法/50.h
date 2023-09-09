#pragma once
#include <unordered_map>
#include <string>

class Solution
{
public:
	Solution();
	~Solution();
	char firstUniqChar(std::string s) {
		std::unordered_map<char, bool> m;
		for (auto&& c : s) {
			m[c] = m.find(c) == m.end();
		}
		for (auto&& c : s) {
			if (m[c]) return c;
			else return ' ';
		}
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}
