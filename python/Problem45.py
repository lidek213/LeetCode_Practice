# Problem: 45. Jump Game II
# URL: https://leetcode.com/problems/jump-game-ii/
# Difficulty: Medium
# Tags: Array

from typing import List

class Solution:
  def jump(self, nums: List[int]) -> int:
    result: int = 0
    length: int = len(nums)
    for i in range(1, length):
      nums[i] = max(nums[i] + i, nums[i - 1])
    pos: int = 0
    while pos < length - 1:
      result += 1
      pos = nums[pos]
    return result