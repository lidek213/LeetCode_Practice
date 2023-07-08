# Problem: 66. Plus One
# URL: https://leetcode.com/problems/plus-one/
# Difficulty: Easy
# Tags: Array

from typing import List

class Solution:
  def plusOne(self, digits: List[int]) -> List[int]:
    result: List[int] = digits
    carry: int = 1
    i: int = len(digits) -1

    while carry != 0 and i >= 0:
      result[i] += carry
      carry = result[i] // 10
      result[i] %= 10
      i -= 1
    if carry != 0:
      result.insert(0, carry)
    return result