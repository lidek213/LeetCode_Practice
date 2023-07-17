# Problem: 141. Linked List Cycle
# URL: https://leetcode.com/problems/linked-list-cycle/
# Difficulty: Easy
# Tags: Linked List, Fast Slow Pointers

from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
      self.val = x
      self.next = None

class Solution:
  def hasCycle(self, head: Optional[ListNode]) -> bool:
    slow: Optional[ListNode] = head
    fast: Optional[ListNode] = head
    while slow != None and fast != None:
      if slow.next == None or fast.next == None or fast.next.next == None:
        return False
      slow = slow.next
      fast = fast.next.next
      if slow == fast:
        return True
    return False