# Problem: 26. Remove Duplicates from Sorted Array
# URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
# Difficulty: Easy
# Tags: Array

from typing import List

class Solution:
  def removeDuplicates(self, nums: List[int]) -> int:
    length: int = len(nums)
    newLength: int = 1
    j: int = 0
    for i in range(1, length):
      if nums[i] != nums[j]:
        j += 1
        temp:int = nums[i]
        nums[i] = nums[j]
        nums[j] = temp
        newLength += 1
    return newLength