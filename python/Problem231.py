# Problem: 231. Power of Two
# URL: https://leetcode.com/problems/power-of-two/
# Difficulty: Easy
# Tags: Bitwise Operation

class Solution:
  def isPowerOfTwo(self, n: int) -> bool:
    return n > 0 and (n & (n - 1)) == 0