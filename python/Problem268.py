# Problem: 268. Missing Number
# URL: https://leetcode.com/problems/missing-number/
# Difficulty: Easy
# Tags: Bitwise Operation

from typing import List

class Solution:
  def missingNumber(self, nums: List[int]) -> int:
    m: int = 0
    for i in range(1, len(nums) + 1):
      m ^= i
    for num in nums:
      m ^= num
    return m