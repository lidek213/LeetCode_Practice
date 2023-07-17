# Problem: 142. Linked List Cycle II
# URL: https://leetcode.com/problems/linked-list-cycle-ii/
# Difficulty: Medium
# Tags: Linked List, Fast Slow Pointers

from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
      self.val = x
      self.next = None

class Solution:
  def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
    slow: Optional[ListNode] = head
    fast: Optional[ListNode] = head
    while fast != None and fast.next != None:
      slow = slow.next
      fast = fast.next.next
      if slow == fast:
        break
    if fast == None or fast.next == None:
      return None
    slow = head
    while slow != fast:
      slow = slow.next
      fast = fast.next
    return slow