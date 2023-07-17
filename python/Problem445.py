# Problem: 445. Add Two Numbers II
# URL: https://leetcode.com/problems/add-two-numbers-ii/
# Difficulty: Medium
# Tags: Linked List

from typing import Optional

# Definition for singly-linked list.
class ListNode:
  def __init__(self, val=0, next=None):
    self.val = val
    self.next = next

class Solution:
  def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
    def reverseListNode(head: Optional[ListNode]):
      newHead: Optional[ListNode] = None
      tmp: Optional[ListNode] = None
      while head != None:
        tmp = head.next
        head.next = newHead
        newHead = head
        head = tmp
      return newHead
    
    l1 = reverseListNode(l1)
    l2 = reverseListNode(l2)
    dummy: Optional[ListNode] = ListNode()
    prev: Optional[ListNode] = dummy
    carry: int = 0
    sum: int = 0
    while l1 != None or l2 != None or carry != 0:
      sum = carry
      if l1 != None:
        sum += l1.val
        l1 = l1.next
      if l2 != None:
        sum += l2.val
        l2 = l2.next
      carry = sum // 10
      prev.next = ListNode(sum % 10)
      prev = prev.next
    prev = dummy.next
    dummy.next = None
    return reverseListNode(prev)