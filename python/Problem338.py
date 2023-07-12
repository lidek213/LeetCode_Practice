# Problem: 338. Counting Bits
# URL: https://leetcode.com/problems/counting-bits/
# Difficulty: Easy
# Tags: Array, Dynamic Programming(DP)

from typing import List

class Solution:
  def countBits(self, n: int) -> List[int]:
    if n == 0:
      return [0]
    if n == 1:
      return [0, 1]
    result: List[int] = [0, 1]
    for i in range(2, n + 1):
      result.append(result[i // 2] + (i % 2))
    return result