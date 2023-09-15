#pragma once
#include "../../struct_define.h"

class Solution
{
public:
	Solution();
	~Solution();
	int lengthOfLongestSubstring_self(std::string s) {
		int a = 0, b = 1, len=s.length(), ss=0;
		std::string sub;
		for (int&& i = 0; i < len+1; i++) {
			if (i == 0) continue;
			sub = s.substr(ss, i-ss);
			for (int&& j = 0; j < sub.length(); j++) {
				if (sub[j] == s[i]) {
					ss = ss + j + 1;
					break;
				}
			}
			a = std::max(a, int(sub.length()));
			std::cout << "i: " << i
					<< " sub: " << sub 
					<< std::endl;
		}
		return a;
	}

	int lengthOfLongestSubstring(std::string s) {
		std::unordered_map<char, int> dic;
		int res = 0, tmp = 0, len = s.size(), i;
		for (int j = 0; j < len; j++) {
			if (dic.find(s[j]) == dic.end()) i = -1;
			else i = dic.find(s[j])->second;
			dic[s[j]] = j;
			tmp = tmp < j - i ? tmp + 1 : j - i;
			res = std::max(res, tmp);
		}
		return res;
	}
private:

};

Solution::Solution() {}

Solution::~Solution() {}