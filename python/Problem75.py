# Problem: 75. Sort Colors
# URL: https://leetcode.com/problems/sort-colors/
# Difficulty: Medium
# Tags: Array, Dutch Flag Algorithm

from typing import List

class Solution:
  def sortColors(self, nums: List[int]) -> None:
    left: int = 0
    mid: int = 0
    right: int = len(nums) - 1
    while mid <= right:
      if nums[mid] < 1:
        nums[left], nums[mid] = nums[mid], nums[left]
        left += 1
        mid += 1
      elif nums[mid] > 1:
        nums[mid], nums[right] = nums[right], nums[mid]
        right -= 1
      else:
        mid += 1