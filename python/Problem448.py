# Problem: 448. Find All Numbers Disappeared in an Array
# URL: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
# Difficulty: Easy
# Tags: Array

from typing import List

class Solution:
  def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
    seen: set[int] = set()
    disappearedNumbers: List[int] = []
    for num in nums:
      seen.add(num)
    for i in range(1, len(nums) + 1):
      if i not in seen:
        disappearedNumbers.append(i)
    return disappearedNumbers