#pragma once
#include <unordered_map>

struct Node {
	int val;
	Node* next;
	Node* random;

	Node(int _val) : next(nullptr), random(nullptr) {};
};

class Solution
{
public:
	Solution() {};
	~Solution() {};

	Node* copyRandomList(Node* head) {
		if (head == nullptr) return nullptr;
		Node* cur = head;
		while (cur != nullptr) {
			refMap[cur] = new Node(cur->val);
			cur = cur->next;
		}
		cur = head;
		while (cur != nullptr) {
			refMap[cur]->next = refMap[cur->next];
			refMap[cur]->random = refMap[cur->random];
			cur = cur->next;
		}
		return refMap[head];
	}
private:
	std::unordered_map<Node*, Node*> refMap{};

};