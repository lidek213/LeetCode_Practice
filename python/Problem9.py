# Problem: 9. Palindrome Number
# URL: https://leetcode.com/problems/palindrome-number/
# Difficulty: Easy
# Tags: Math

class Solution:
  def isPalindrome(self, x: int) -> bool:
    if x < 0:
      return False
    tempNum: int = x
    palindromeNum: int = 0
    while tempNum > 0:
      palindromeNum = palindromeNum * 10 + tempNum % 10
      tempNum /= 10
    return x == palindromeNum