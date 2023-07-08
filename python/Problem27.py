# Problem: 27. Remove Element
# URL: https://leetcode.com/problems/remove-element/
# Difficulty: Easy
# Tags: Array

from typing import List

class Solution:
  def removeElement(self, nums: List[int], val: int) -> int:
    newLength: int = 0
    length: int = len(nums)
    for i in range(length):
      if nums[i] != val:
        nums[newLength] = nums[i]
        newLength += 1
    return newLength