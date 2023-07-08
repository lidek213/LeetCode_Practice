# 17. Letter Combinations of a Phone Number
# URL: https://leetcode.com/problems/letter-combinations-of-a-phone-numbe
# Difficulty: Medium
# Tags: Array, Recursion, Combinations

from typing import List

class Solution:
  digitToLetters: dict = {
    '2': "abc",
    '3': "def",
    '4': "ghi",
    '5': "jkl",
    '6': "mno",
    '7': "pqrs",
    '8': "tuv",
    '9': "wxyz"
  }

  def letterCombinations(self, digits: str) -> List[str]:
    results: List[str] = []
    if len(digits) > 0:
      self.combinations(results, digits, 0, "")
    return results
  
  def combinations(self, results: List[str], digits: str, index: int, s: str):
    if index >= len(digits):
      results.append(s)
      return
    
    letters: str = self.digitToLetters[digits[index]]
    for letter in letters:
      self.combinations(results, digits, index + 1, s + letter)