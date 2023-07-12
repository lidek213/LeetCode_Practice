# Problem: 263. Ugly Number
# URL: https://leetcode.com/problems/ugly-number/
# Difficulty: Easy
# Tags: Math

class Solution:
  def isUgly(self, n: int) -> bool:
    if n < 1:
      return False
    while n % 2 == 0:
      n /= 2
    while n % 3 == 0:
      n /= 3
    while n % 5 == 0:
      n /= 5
    return n == 1