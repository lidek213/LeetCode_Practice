# Problem: 119. Pascal's Triangle II
# URL: https://leetcode.com/problems/pascals-triangle/
# Difficulty: Easy
# Tags: Array, Dynamic Programming(DP)

from typing import List

class Solution:
  def getRow(self, rowIndex: int) -> List[int]:
    results: List[int] = [1] * (rowIndex + 1)
    for i in range(2, rowIndex + 1):
      for j in range(i - 1, 0, -1):
        results[j] = results[j] + results[j - 1]
    return results