# Problem: 58. Length of Last Word
# URL: https://leetcode.com/problems/length-of-last-word/
# Difficulty: Medium
# Tags: Easy


class Solution:
  def lengthOfLastWord(self, s: str) -> int:
    startIndex: int = -1
    endIndex: int = -1
    for i in range(len(s) - 1, -1, -1):
      if s[i] != ' ':
        endIndex = i
        break
    for i in range(0, endIndex + 1):
      if startIndex == -1 and s[i] != ' ':
        startIndex = i
      elif s[i] == ' ':
        startIndex = -1
    return endIndex - startIndex + 1