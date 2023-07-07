# Problem: 2. Add Two Numbers
# URL: https://leetcode.com/problems/add-two-numbers/
# Difficulty: Medium
# Tags: Math, Linked List

from typing import Optional

# Definition for singly-linked list.
class ListNode:
  def __init__(self, val=0, next=None):
    self.val = val
    self.next = next

class Solution:
  def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
    head: Optional[ListNode] = ListNode(0)
    current: Optional[ListNode] = head
    carry: int = 0

    while l1 is not None or l2 is not None or carry != 0:
      d1: int = l1.val if l1 is not None else 0
      d2: int = l2.val if l2 is not None else 0

      sum: int = d1 + d2 + carry
      d: int = sum % 10
      carry: int = sum // 10

      current.next = ListNode(d)
      current = current.next

      l1 = l1.next if l1 is not None else None
      l2 = l2.next if l2 is not None else None
    
    result: Optional[ListNode] = head.next
    head.next = None
    return result