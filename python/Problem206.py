# Problem: 204. Count Primes
# URL: https://leetcode.com/problems/count-primes/
# Difficulty: Medium
# Tags: Prime

from typing import Optional

# Definition for singly-linked list.
class ListNode:
  def __init__(self, val=0, next=None):
    self.val = val
    self.next = next

class Solution:
  def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
    newHead: Optional[ListNode] = None
    tmp: Optional[ListNode] = None
    while head != None:
      tmp = head.next
      head.next = newHead
      newHead = head
      head = tmp
    return newHead