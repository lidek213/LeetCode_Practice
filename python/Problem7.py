# Problem: 7. Reverse Integer
# URL: https://leetcode.com/problems/reverse-integer/
# Difficulty: Medium
# Tags: Math

class Solution:
  def reverse(self, x: int) -> int:
    MIN = -2 ** 31
    MAX = 2 ** 31 - 1
    sign = -1 if x < 0 else 1
    x = abs(x)
    result: int = 0
    while x != 0:
      result = result * 10 + x % 10
      x //= 10
    if result < MIN or result > MAX:
      return 0
    return result * sign
