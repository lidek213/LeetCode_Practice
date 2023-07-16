# Problem: 94. Binary Tree Inorder Traversal
# URL: https://leetcode.com/problems/binary-tree-inorder-traversal/
# Difficulty: Easy
# Tags: Tree, DFS, Inorder Traversal

from typing import List
from typing import Optional

# Definition for a binary tree node.
class TreeNode:
  def __init__(self, val=0, left=None, right=None):
    self.val = val
    self.left = left
    self.right = right

class Solution:
  def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
    result: List[int] = []
    head: Optional[TreeNode] = root
    prev: Optional[TreeNode] = None
    while head != None:
      if head.left == None:
        result.append(head.val)
        head = head.right
      else:
        prev = head.left
        while prev.right != None:
          prev = prev.right
        prev.right = head
        tmp: Optional[TreeNode] = head
        head = head.left
        tmp.left = None
    return result