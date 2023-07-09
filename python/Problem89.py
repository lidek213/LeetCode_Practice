# Problem: 89. Gray Code
# URL: https://leetcode.com/problems/gray-code/
# Difficulty: Medium
# Tags: Bitwise Operation

from typing import List

class Solution:
  def grayCode(self, n: int) -> List[int]:
    results: List[int] = []
    grayCode = 0
    for i in range(2 << (n - 1)):
      grayCode ^= i & (-i)
      results.append(grayCode)
    return results