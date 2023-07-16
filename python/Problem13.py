# Problem: 13. Roman to Integer
# URL: https://leetcode.com/problems/roman-to-integer/
# Difficulty: Easy
# Tags: Map

from typing import Dict

class Solution:
  def romanToInt(self, s: str) -> int:
    length: int = len(s)

    romanToNums: Dict = {
      'I': 1,
      'V': 5,
      'X': 10,
      'L': 50,
      'C': 100,
      'D': 500,
      'M': 1000
    }

    result: int = 0
    for i in range(0, length):
      if i + 1 < length and romanToNums[s[i]] < romanToNums[s[i + 1]]:
        result -= romanToNums[s[i]]
      else:
        result += romanToNums[s[i]]
    return result