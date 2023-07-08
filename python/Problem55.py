# Problem: 55. Jump Game
# URL: https://leetcode.com/problems/jump-game/
# Difficulty: Medium
# Tags: Array, Math

from typing import List

class Solution:
  def canJump(self, nums: List[int]) -> bool:
    endIndex: int = len(nums) - 1
    for i in range(endIndex, 0, -1):
      if i + nums[i] >= endIndex:
        endIndex = i
    return endIndex == 0