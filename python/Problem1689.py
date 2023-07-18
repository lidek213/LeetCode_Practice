# Problem: 1689. Partitioning Into Minimum Number Of Deci-Binary Numbers
# URL: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
# Difficulty: Medium
# Tags: String

class Solution:
  def minPartitions(self, n: str) -> int:
    minNum: int = 0
    for c in n:
      num = ord(c) - ord('0')
      if num > minNum:
        minNum = num
    return minNum