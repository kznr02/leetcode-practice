#include "014.h"

std::string longestCommonPrefix(std::vector<std::string>& strs) {
	//	≈≈–Ú
	//for (size_t j = 2; j < strs.size(); j++) {
	//	auto key_len = strs[j].length();
	//	auto key = strs[j];
	//	auto i = j - 1;
	//	while (i>0 && strs[i].length() > key_len) {
	//		strs[i + 1] = strs[i];
	//		i = i - 1;
	//	}
	//	strs[i + 1] = key;
	//}

	auto&& prefix = strs[0];
	for (auto&& s : strs) {
		for (size_t i = 0; i < prefix.length(); i++) {
			if (s.length() <= i || s[i] != prefix[i]) {
				prefix = prefix.substr(0, i);
				break;
			}
		}
	}
	return prefix;
}