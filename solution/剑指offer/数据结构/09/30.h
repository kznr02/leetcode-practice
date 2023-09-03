#pragma once
#include <stack>

class MinStack
{
	public:
	MinStack() {};
	~MinStack() {};
	void push(int x) {
		A.push(x);
		if (B.empty() || B.top() >= x) {
			B.push(x);
		}
	}

	void pop() {
		if (A.top() == B.top()) {
			B.pop();
		}
		A.pop();
	}

	int top() {
		return A.top();
	}

	int min() {
		return B.top();
	}

	private:
	std::stack<int> A;
	std::stack<int> B;
};