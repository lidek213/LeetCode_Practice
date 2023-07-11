# Problem: 204. Count Primes
# URL: https://leetcode.com/problems/count-primes/
# Difficulty: Medium
# Tags: Prime

from typing import List

class Solution:
  def countPrimes(self, n: int) -> int:
    if n < 3:
      return 0
    sieve: List[bool] = [False] * n
    primes: List[int] = [2]
    for i in range(3, n, 2):
      if not sieve[i]:
        primes.append(i)
      for prime in primes:
        if i * prime >= n:
          break;
        sieve[i * prime] = True
        if i % prime == 0:
          break
    return len(primes)