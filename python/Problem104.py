# Problem: 104. Maximum Depth of Binary Tree
# URL: https://leetcode.com/problems/maximum-depth-of-binary-tree/
# Difficulty: Easy
# Tags: Tree, DFS

from typing import Optional
from typing import List

# Definition for a binary tree node.
class TreeNode:
  def __init__(self, val=0, left=None, right=None):
    self.val = val
    self.left = left
    self.right = right

class Solution:
  def maxDepth(self, root: Optional[TreeNode]) -> int:
    if root == None:
      return 0
    return max(self.maxDepth(root.left), self.maxDepth(root.right)) + 1