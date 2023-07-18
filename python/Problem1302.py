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
    nextLevel: List[TreeNode] = [root]
    currentLevel: List[TreeNode] = []
    while len(nextLevel) != 0:
      currentLevel = nextLevel
      nextLevel = []
      for node in currentLevel:
        if node.left != None:
          nextLevel.append(node.left)
        if node.right != None:
          nextLevel.append(node.right)
    return sum([node.val for node in currentLevel])