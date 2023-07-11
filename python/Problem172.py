# Problem: 172. Factorial Trailing Zeroes
# URL: https://leetcode.com/problems/factorial-trailing-zeroes/
# Difficulty: Medium
# Tags: Math

class Solution:
  def trailingZeroes(self, n: int) -> int:
    result: int = 0
    while n > 0:
      n //= 5
      result += n
    return result