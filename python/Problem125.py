# Problem: 125. Valid Palindrome
# URL: https://leetcode.com/problems/valid-palindrome/
# Difficulty: Easy
# Tags: String


class Solution:
  def isPalindrome(self, s: str) -> bool:
    i: int = 0
    j: int = len(s) - 1
    while i < j:
      while i < j and not s[i].isalnum():
        i += 1
      while i < j and not s[j].isalnum():
        j -= 1
      if s[i].lower() != s[j].lower():
        return False
      i += 1
      j -= 1
    return True