# Problem: 264. Ugly Number II
# URL: https://leetcode.com/problems/ugly-number/
# Difficulty: Easy
# Tags: Math, Array

from typing import List

class Solution:
  def nthUglyNumber(self, n: int) -> int:
    length: int = 3
    minUgly: int = 0
    minIndex: int = 0
    tmp: int = 0
    primes: List[int] = [2, 3, 5]
    uglyNumbers: List[int] = [0] * n
    uglyNumbersIndex: List[int] = [0] * length
    uglyNumbers[0] = 1
    for i in range(1, n):
      minUgly = uglyNumbers[uglyNumbersIndex[0]] * primes[0]
      minIndex = 0
      for j in range(1, length):
        tmp = uglyNumbers[uglyNumbersIndex[j]] * primes[j]
        if minUgly == tmp:
          uglyNumbersIndex[j] += 1
        elif minUgly > tmp:
          minUgly = tmp
          minIndex = j
      uglyNumbers[i] = minUgly
      uglyNumbersIndex[minIndex] += 1
    return uglyNumbers[n - 1]