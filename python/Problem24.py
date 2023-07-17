# Problem: 24. Swap Nodes in Pairs
# URL: https://leetcode.com/problems/swap-nodes-in-pairs/
# Difficulty: Medium
# Tags: Linked List

from typing import Optional

# Definition for singly-linked list.
class ListNode:
  def __init__(self, val=0, next=None):
    self.val = val
    self.next = next

class Solution:
  def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
    if head == None or head.next == None:
      return head

    prev: Optional[ListNode] = head
    curr: Optional[ListNode] = head.next.next
    head = head.next
    head.next = prev
    while curr != None and curr.next != None:
      prev.next = curr.next
      curr.next = prev.next.next
      prev.next.next = curr

      prev = curr
      curr = curr.next
    prev.next = curr
    return head