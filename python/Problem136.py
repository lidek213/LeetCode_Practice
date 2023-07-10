# Problem: 136. Single Number
# URL: https://leetcode.com/problems/single-number/
# Difficulty: Easy
# Tags: Bitwise Operation

from typing import List

class Solution:
  def singleNumber(self, nums: List[int]) -> int:
    result: int = 0
    for num in nums:
      result ^= num
    return result