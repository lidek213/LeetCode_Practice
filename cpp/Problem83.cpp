/*
 * Problem: 83. Remove Duplicates from Sorted List
 * URL: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode* prev = head;
		while (prev != nullptr && prev->next != nullptr) {
			if (prev->val == prev->next->val) {
				prev->next = prev->next->next;
			} else {
				prev = prev->next;
			}
		}
		return head;
	}
};