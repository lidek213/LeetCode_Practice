# Problem: 168. Excel Sheet Column Title
# URL: https://leetcode.com/problems/excel-sheet-column-title/
# Difficulty: Easy
# Tags: String

class Solution:
  def convertToTitle(self, columnNumber: int) -> str:
    result: str = ""
    while columnNumber > 0:
      result += chr((((columnNumber - 1) % 26) + ord('A')))
      columnNumber = (columnNumber - 1) // 26
    return result[::-1]