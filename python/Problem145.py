# Problem: 145. Binary Tree Postorder Traversal
# URL: https://leetcode.com/problems/binary-tree-postorder-traversal/
# Difficulty: Easy
# Tags: Tree, DFS, Postorder Traversal

from typing import List
from typing import Optional

# Definition for a binary tree node.
class TreeNode:
  def __init__(self, val=0, left=None, right=None):
    self.val = val
    self.left = left
    self.right = right

class Solution:
  def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
    result: List[int] = []
    def postorder(node: Optional[TreeNode]):
      if not node:
        return
      postorder(node.left)
      postorder(node.right)
      result.append(node.val)
    postorder(root)
    return result