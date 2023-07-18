# Problem: 1302. Deepest Leaves Sum
# URL: https://leetcode.com/problems/deepest-leaves-sum/
# Difficulty: Medium
# Tags: Tree, DFS

from typing import List
from typing import Optional

# Definition for a binary tree node.
class TreeNode:
  def __init__(self, val=0, left=None, right=None):
    self.val = val
    self.left = left
    self.right = right

class Solution:
  def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
    maxDepth: int = 0
    result: int = 0
    def dfs(node: Optional[TreeNode], depth: int):
      if (node == None):
        return
      dfs(node.left, depth + 1)
      dfs(node.right, depth + 1)
      nonlocal maxDepth, result
      if depth > maxDepth:
        maxDepth = depth
        result = 0
      if depth == maxDepth:
        result += node.val
    dfs(root, 0)
    return result