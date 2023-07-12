# Problem: 500. Keyboard Row
# URL: https://leetcode.com/problems/keyboard-row/
# Difficulty: Easy
# Tags: Array, String

from typing import List

class Solution:
  def findWords(self, words: List[str]) -> List[str]:
    tables: List[int] = [1,3,3,1,2,1,1,1,2,1,1,1,3,3,2,2,2,2,1,2,2,3,2,3,2,3];
    results: List[int] = []
    for word in words:
      tmpWord = word.lower()
      tmp: int = tables[ord(tmpWord[0]) - ord('a')]
      added: bool = True
      for i in range(1, len(tmpWord)):
        if not added:
          break
        added = (tmp == tables[ord(tmpWord[i]) - ord('a')])
      if added:
        results.append(word)
    return results