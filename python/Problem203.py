# Problem: 203. Remove Linked List Elements
# URL: https://leetcode.com/problems/remove-linked-list-elements/
# Difficulty: Easy
# Tags: Linked List

from typing import List
from typing import Optional

# Definition for singly-linked list.
class ListNode:
  def __init__(self, val=0, next=None):
    self.val = val
    self.next = next

class Solution:
  def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
    dummy: Optional[ListNode] = ListNode(0, head)
    prev: ListNode = dummy
    while prev.next != None:
      if prev.next.val == val:
        prev.next = prev.next.next
      else:
        prev = prev.next
    return dummy.next
