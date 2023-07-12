# Problem: 283. Move Zeroes
# URL: https://leetcode.com/problems/move-zeroes/
# Difficulty: Easy
# Tags: Array, Dutch Flag Algorithm

from typing import List

class Solution:
  def moveZeroes(self, nums: List[int]) -> None:
    j: int = 0
    for i in range(len(nums)):
      if nums[i] != 0:
        nums[i], nums[j] = nums[j], nums[i]
        j += 1