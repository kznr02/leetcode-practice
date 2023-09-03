#pragma once

#include <stack>

class CQueue {
	public:
	CQueue() {
		s1 = new std::stack<int>;
		s2 = new std::stack<int>;
	}

	void appendTail(int value) {
		s1->push(value);
	}

	int deleteHead() {
		if (!s2->empty()) {
			int tmp = s2->top();
			s2->pop();
			return tmp;
		}
		if (s1->empty()) {
			return -1;
		}
		while (!s1->empty()) {
			int tmp = s1->top();
			s1->pop();
			s2->push(tmp);
		}
		int tmp = s2->top();
		s2->pop();
		return tmp;
	}

	private:
	std::stack<int>* s1;
	std::stack<int>* s2;
};