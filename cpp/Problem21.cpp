/*
 * Problem: 21. Merge Two Sorted Lists
 * URL: https://leetcode.com/problems/merge-two-sorted-lists/
 * Difficulty: Easy
 * Tags: Linked List, Sort
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
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		ListNode* dummyNode = new ListNode();
		ListNode* tempNode = dummyNode;
		while (list1 != nullptr && list2 != nullptr) {
			if (list1->val < list2->val) {
				tempNode->next = list1;
				list1 = list1->next;
			} else {
				tempNode->next = list2;
				list2 = list2->next;
			}
			tempNode = tempNode->next;
		}
		if (list1 != nullptr) {
			tempNode->next = list1;
		}
		if (list2 != nullptr) {
			tempNode->next = list2;
		}
		tempNode = dummyNode->next;
		delete dummyNode;
		return tempNode;
	}
};