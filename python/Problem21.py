# Problem: 21. Merge Two Sorted Lists
# URL: https://leetcode.com/problems/merge-two-sorted-lists/
# Difficulty: Easy
# Tags: Linked List, Sort

from typing import Optional

# Definition for singly-linked list.
class ListNode:
  def __init__(self, val=0, next=None):
    self.val = val
    self.next = next

class Solution:
  def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
    dummyNode: Optional[ListNode] = ListNode()
    tempNode: Optional[ListNode] = dummyNode

    while list1 != None and list2 != None:
      if list1.val < list2.val:
        tempNode.next = list1
        list1 = list1.next
      else:
        tempNode.next = list2
        list2 = list2.next
      tempNode = tempNode.next
    if list1 != None:
      tempNode.next = list1
    if list2 != None:
      tempNode.next = list2
    return dummyNode.next  