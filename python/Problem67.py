# Problem: 67. Add Binary
# URL: https://leetcode.com/problems/add-binary/
# Difficulty: Easy
# Tags: String

class Solution:
  def addBinary(self, a: str, b: str) -> str:
    result: str = ""
    i: int = len(a) - 1
    j: int = len(b) - 1
    carry: int = 0
    while i >= 0 or j >= 0:
      sum: int = carry
      if i >= 0:
        sum += ord(a[i]) - ord('0')
        i -= 1
      if j >= 0:
        sum += ord(b[j]) - ord('0')
        j -= 1
      carry = sum // 2
      sum %= 2
      result += str(sum)
    if carry > 0:
      result += str(carry)
    return result[::-1]