# Problem: 171. Excel Sheet Column Number
# URL: https://leetcode.com/problems/excel-sheet-column-number/
# Difficulty: Easy
# Tags: String

class Solution:
  def titleToNumber(self, columnTitle: str) -> int:
    number: int = 0
    for i in range(len(columnTitle)):
      number = number * 26 + (ord(columnTitle[i]) - ord('A')) + 1
    return number