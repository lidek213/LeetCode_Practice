# Problem: 392. Is Subsequence
# URL: https://leetcode.com/problems/is-subsequence/
# Difficulty: Easy
# Tags: Array, String, Subsequence

class Solution:
  def isSubsequence(self, s: str, t: str) -> bool:
    i: int = 0
    for j in range(len(t)):
      if i >= len(s):
        break
      if s[i] == t[j]:
        i += 1
    return i == len(s)