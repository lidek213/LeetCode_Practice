/*
 * Problem: 445. Add Two Numbers II
 * URL: https://leetcode.com/problems/add-two-numbers-ii/
 * Difficulty: Medium
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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		l1 = reverseListNode(l1);
		l2 = reverseListNode(l2);
		ListNode* dummy = new ListNode();
		ListNode* prev = dummy;
		int carry = 0, sum = 0;
		while (l1 != nullptr || l2 != nullptr || carry) {
			sum = carry;
			if (l1 != nullptr) {
				sum += l1->val;
				l1 = l1->next;
			}
			if (l2 != nullptr) {
				sum += l2->val;
				l2 = l2->next;
			}
			carry = sum / 10;
			prev->next = new ListNode(sum % 10);
			prev = prev->next;
		}
		prev = dummy->next;
		dummy->next = nullptr;
		delete dummy;
		return reverseListNode(prev);
	}

private:
	ListNode* reverseListNode(ListNode* head) {
		ListNode* newHead = nullptr;
		ListNode* tmp = nullptr;
		while (head != nullptr) {
			tmp = head->next;
			head->next = newHead;
			newHead = head;
			head = tmp;
		}
		return newHead;
	}
};