# Problem: 50. Pow(x, n)
# URL: https://leetcode.com/problems/powx-n
# Difficulty: Easy
# Tags: Math

class Solution:
  def myPow(self, x: float, n: int) -> float:
    if n < 0:
      x =  1 / x
      n = -n
    if n == 0:
      return 1
    y: float = 1
    while n > 1:
      if n % 2 == 0:
        x *= x
        n //= 2
      else:
        y *= x
        x *= x
        n //=2
    return x * y