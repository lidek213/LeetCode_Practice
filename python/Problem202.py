# Problem: 202. Happy Number
# URL: https://leetcode.com/problems/happy-number/
# Difficulty: Easy
# Tags: Math

from typing import List

class Solution:
  def isHappy(self, n: int) -> bool:
    squaresTable: List[int] = [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
    existNumber: set = set()
    sum: int = 0
    while n not in existNumber:
      existNumber.add(n)
      sum = 0
      while n > 0:
        sum += squaresTable[n % 10]
        n //= 10
      n = sum
    return 1 in existNumber