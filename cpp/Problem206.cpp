/*
 * Problem: 206. Reverse Linked List
 * URL: https://leetcode.com/problems/reverse-linked-list/
 * Difficulty: Easy
 * Tags: Linked List
 */

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* newHead = nullptr;
		ListNode* tmp;
		while (head != nullptr) {
			tmp = head->next;
			head->next = newHead;
			newHead = head;
			head = tmp;
		}
		return newHead;
	}
};