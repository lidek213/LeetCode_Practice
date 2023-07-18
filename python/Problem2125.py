# Problem: 2125. Number of Laser Beams in a Bank
# URL: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
# Difficulty: Medium
# Tags: Math

from typing import List

class Solution:
  def numberOfBeams(self, bank: List[str]) -> int:
    result: int = 0
    prevLasterCount: int = 0
    for b in bank:
      currLasterCount: int = b.count('1')
      result += prevLasterCount * currLasterCount
      if currLasterCount != 0:
        prevLasterCount = currLasterCount
    return result