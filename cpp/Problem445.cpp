/*
 * Problem: 445. Add Two Numbers II
 * URL: https://leetcode.com/problems/add-two-numbers-ii/
 * Difficulty: Medium
 * Tags: Linked List
 */

#include <stack>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		stack<int> l1_val_stack;
		stack<int> l2_val_stack;
		while (l1 != nullptr) {
			l1_val_stack.push(l1->val);
			l1 = l1->next;
		}
		while (l2 != nullptr) {
			l2_val_stack.push(l2->val);
			l2 = l2->next;
		}
		ListNode* prev = nullptr;
		int carry = 0, sum = 0;
		while (!l1_val_stack.empty() || !l2_val_stack.empty() || carry != 0) {
			sum = carry;
			if (!l1_val_stack.empty()) {
				sum += l1_val_stack.top();
				l1_val_stack.pop();
			}
			if (!l2_val_stack.empty()) {
				sum += l2_val_stack.top();
				l2_val_stack.pop();
			}
			carry = sum / 10;
			prev = new ListNode(sum % 10, prev);
		}
		return prev;
	}
};