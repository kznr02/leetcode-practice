#include "013.h"

std::map<char, int> lut{
		{'I', 1}, {'V', 5}, {'X', 10},
		{'L', 50}, {'C', 100},
		{'D', 500}, {'M', 1000}
};

int romanToInt(std::string s) {
	int res = 0;
	for(int i = 0; i < s.length(); i++) {
		switch (s[i]) {
		case 'I': {
			if (s[i + 1] == 'V') {
				res += 4;
				i++;
			}
			else if (s[i + 1] == 'X') {
				res += 9;
				i++;
			}
			else {
				res += 1;
			}
			break;
		};
		case 'V': {
			res += 5;
			break;
		};
		case 'X': {
			if (s[i + 1] == 'L') {
				res += 40;
				i++;
			}
			else if (s[i + 1] == 'C') {
				res += 90;
				i++;
			}
			else {
				res += 10;
			}
			break;
		};
		case 'L': {
			res += 50;
			break;
		};
		case 'C': {
			if (s[i + 1] == 'D') {
				res += 400;
				i++;
			}
			else if (s[i + 1] == 'M') {
				res += 900;
				i++;
			}
			else {
				res += 100;
			}
			break;
		};
		case 'D': {
			res += 500;
			break;
		}
		case 'M': {
			res += 1000;
		}
		default: break;
		}
	}
	return res;
}

int another_solution(std::string s) {
	int num = 0, total = 0, lastint = 0;
	for (auto i = s.rbegin(); i != s.rend(); ++i) {
		char tmp = *i;
		num = lut[tmp];
		if (num < lastint) {
			total -= num;
		}
		else {
			total += num;
		}
		lastint = num;
	}

	return total;
}