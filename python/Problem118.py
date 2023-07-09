# Problem: 118. Pascal's Triangle
# URL: https://leetcode.com/problems/pascals-triangle/
# Difficulty: Easy
# Tags: Array, Dynamic Programming(DP)

from typing import List

class Solution:
  def generate(self, numRows: int) -> List[List[int]]:
    results: List[List[int]] = []
    for row in range(numRows):
      results.append([1] * (row + 1))
      for col in range(1, row):
        results[row][col] = results[row - 1][col - 1] + results[row - 1][col]
    return results