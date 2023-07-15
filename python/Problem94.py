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
    def inorder(node: Optional[TreeNode]):
      if not node:
        return
      inorder(node.left)
      result.append(node.val)
      inorder(node.right)
    inorder(root)
    return result