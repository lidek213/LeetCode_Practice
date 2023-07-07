# Problem: 35. Search Insert Position
# URL: https://leetcode.com/problems/search-insert-position
# Difficulty: Easy
# Tags: Array, Binary Search

from typing import List

class Solution:
  def searchInsert(self, nums: List[int], target: int) -> int:
    leftIndex: int = 0
    rightIndex: int = len(nums) - 1

    while leftIndex <= rightIndex:
      midIndex: int = leftIndex + (rightIndex - leftIndex) // 2
      if nums[midIndex] == target:
        return midIndex
      elif nums[midIndex] < target:
        leftIndex = midIndex + 1
      else:
        rightIndex = midIndex - 1
    return leftIndex