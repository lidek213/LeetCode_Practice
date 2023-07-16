# Problem: 28. Find the Index of the First Occurrence in a String
# URL: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
# Difficulty: Easy
# Tags: Array, String, Knuth-Morris-Pratt(KMP) Algorithm

from typing import List

class Solution:
  def strStr(self, haystack: str, needle: str) -> int:
    haystackLength: int = len(haystack)
    needleLength: int = len(needle)
    lastIndexs: List[int] = [0] * needleLength
    prevIndex: int = 0
    for i in range(1, needleLength):
      while prevIndex > 0 and needle[i] != needle[prevIndex]:
        prevIndex = lastIndexs[prevIndex - 1]
      if needle[i] == needle[prevIndex]:
        prevIndex += 1
        lastIndexs[i] = prevIndex
    needleIndex = 0
    for i in range(haystackLength):
      while needleIndex > 0 and haystack[i] != needle[needleIndex]:
        needleIndex = lastIndexs[needleIndex - 1]
      if haystack[i] == needle[needleIndex]:
        needleIndex += 1
      if needleIndex == needleLength:
        return i - needleIndex + 1
    return -1