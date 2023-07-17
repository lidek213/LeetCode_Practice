# Problem: 445. Add Two Numbers II
# URL: https://leetcode.com/problems/add-two-numbers-ii/
# Difficulty: Medium
# Tags: Linked List

from typing import List
from typing import Optional

# Definition for singly-linked list.
class ListNode:
  def __init__(self, val=0, next=None):
    self.val = val
    self.next = next

class Solution:
  def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
    l1_val_stack: List[int] = []
    l2_val_stack: List[int] = []
    while l1 != None:
      l1_val_stack.append(l1.val)
      l1 = l1.next
    while l2 != None:
      l2_val_stack.append(l2.val)
      l2 = l2.next
    prev: Optional[ListNode] = None
    carry: int = 0
    sum: int = 0
    while len(l1_val_stack) != 0 or len(l2_val_stack) != 0 or carry != 0:
      sum = carry
      if len(l1_val_stack):
        sum += l1_val_stack.pop()
      if len(l2_val_stack):
        sum += l2_val_stack.pop()
      carry = sum // 10
      prev = ListNode(sum % 10, prev)
    return prev