# Problem: 242. Valid Anagram
# URL: https://leetcode.com/problems/valid-anagram/
# Difficulty: Easy
# Tags: Array

from typing import List

class Solution:
  def isAnagram(self, s: str, t: str) -> bool:
    letterFrequency: List[int] = [0] * 26
    for c in s:
      letterFrequency[ord(c) - ord('a')] += 1
    for c in t:
      letterFrequency[ord(c) - ord('a')] -= 1
    for frequency in letterFrequency:
      if frequency != 0:
        return False
    return True