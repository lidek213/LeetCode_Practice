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
    def preorder(node: Optional[TreeNode]):
      if not node:
        return
      result.append(node.val)
      preorder(node.left)
      preorder(node.right)
    preorder(root)
    return result