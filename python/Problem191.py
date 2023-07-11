# Problem: 191. Number of 1 Bits
# URL: https://leetcode.com/problems/number-of-1-bits/description/
# Difficulty: Easy
# Tags: Bitwise Operation

class Solution:
  def hammingWeight(self, n: int) -> int:
    weight: int = 0
    while n > 0:
      weight += n & 1
      n >>= 1
    return weight