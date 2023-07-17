/*
 * Problem: 141. Linked List Cycle
 * URL: https://leetcode.com/problems/linked-list-cycle/
 * Difficulty: Easy
 * Tags: Linked List, Fast Slow Pointers
 */

#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool hasCycle(ListNode *head) {
		ListNode* slow = head;
		ListNode* fast = head;
		while (slow != NULL && fast != NULL) {
			if (slow->next == NULL || fast->next == NULL || fast->next->next == NULL) {
				return false;
			}
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast) {
				return true;
			}
		}
		return false;
	}
};