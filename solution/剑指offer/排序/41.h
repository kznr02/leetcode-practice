#pragma once
#include "../../struct_define.h"

class MedianFinder {
public:
	std::priority_queue<int, std::vector<int>, std::greater<int>> A;
	std::priority_queue<int, std::vector<int>, std::less<int>> B;
	MedianFinder() {}

	void addNum(int num) {
		if (A.size() != B.size()) {
			A.push(num);
			B.push(A.top());
			A.pop();
		} else {
			B.push(num);
			A.push(B.top());
			B.pop();
		}
	}

	double findMedian() {
		return A.size() != B.size() ? A.top() : (A.top() + B.top()) / 2.0;
	}

};