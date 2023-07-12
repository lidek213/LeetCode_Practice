# Problem: 326. Power of Three
# URL: https://leetcode.com/problems/power-of-three/
# Difficulty: Easy
# Tags: Math

class Solution:
  def isPowerOfThree(self, n: int) -> bool:
    if n <= 0:
      return False
    while n % 3 == 0:
      n /= 3
    return n == 1