# Problem: 287. Find the Duplicate Number
# URL: https://leetcode.com/problems/find-the-duplicate-number/
# Difficulty: Medium
# Tags: Array, Fast Slow Pointers

from typing import List

class Solution:
  def findDuplicate(self, nums: List[int]) -> int:
    slow: int = 0
    fast: int = 0
    while True:
      slow = nums[slow]
      fast = nums[nums[fast]]
      if slow == fast:
        break
    slow = 0
    while slow != fast:
      slow = nums[slow]
      fast = nums[fast]
    return slow