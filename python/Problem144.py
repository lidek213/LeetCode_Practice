# Problem: 144. Binary Tree Preorder Traversal
# URL: https://leetcode.com/problems/binary-tree-preorder-traversal/
# Difficulty: Easy
# Tags: Tree, DFS, Preorder Traversal

from typing import List
from typing import Optional

# Definition for a binary tree node.
class TreeNode:
  def __init__(self, val=0, left=None, right=None):
    self.val = val
    self.left = left
    self.right = right

class Solution:
  def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
    result: List[int] = []
    head: Optional[TreeNode] = root
    prev: Optional[TreeNode] = None
    while head != None:
      result.append(head.val)
      if head.left == None:
        head = head.right
      else:
        prev = head.left
        while prev.right != None:
          prev = prev.right
        prev.right = head.right
        tmp: Optional[TreeNode] = head
        head = head.left
        tmp.left = None
    return result