/*
 * Problem: 203. Remove Linked List Elements
 * URL: https://leetcode.com/problems/remove-linked-list-elements/
 * Difficulty: Easy
 * Tags: Linked List
 */

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
	ListNode* removeElements(ListNode* head, int val) {
		ListNode* dummy = new ListNode(0, head);
		ListNode* prev = dummy;
		while (prev->next != nullptr) {
			if (prev->next->val == val) {
				prev->next = prev->next->next;
			} else {
				prev = prev->next;
			}
		}
		prev = dummy->next;
		dummy->next = nullptr;
		delete dummy;
		return prev;
	}
};