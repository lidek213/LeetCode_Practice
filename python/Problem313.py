# Problem: 313. Super Ugly Number
# URL: https://leetcode.com/problems/super-ugly-number/
# Difficulty: Medium
# Tags: Math, Array

from typing import List

class Solution:
  def nthSuperUglyNumber(self, n: int, primes: List[int]) -> int:
    length: int = len(primes)
    minUgly: int = 0
    minIndex: int = 0
    tmp: int = 0
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