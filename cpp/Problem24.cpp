/*
 * Problem: 24. Swap Nodes in Pairs
 * URL: https://leetcode.com/problems/swap-nodes-in-pairs/
 * Difficulty: Medium
 * Tags: Linked List
 */

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
	ListNode* swapPairs(ListNode* head) {
		if (head == nullptr || head->next == nullptr) {
			return head;
		}
		ListNode* prev = head;
		ListNode* curr = head->next->next;
		head = head->next;
		head->next = prev;
		while (curr != nullptr && curr->next != nullptr) {
			prev->next = curr->next;
			curr->next = prev->next->next;
			prev->next->next = curr;
			
			prev = curr;
			curr = curr->next;
		}
		prev->next = curr;
		return head;
	}
};