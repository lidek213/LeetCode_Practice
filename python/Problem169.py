# Problem: 169. Majority Element
# URL: https://leetcode.com/problems/majority-element/
# Difficulty: Easy
# Tags: Array

from typing import List

class Solution:
  def majorityElement(self, nums: List[int]) -> int:
    count: int = 0
    candidate: int = 0
    for num in nums:
      if (count == 0):
        candidate = num
      count += 1 if num == candidate else -1
    return candidate