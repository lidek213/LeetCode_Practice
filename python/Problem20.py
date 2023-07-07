# Problem: 20. Valid Parentheses
# URL: https://leetcode.com/problems/valid-parentheses/description/
# Difficulty: Easy
# Tags: String, Stack

class Solution:
  def isValid(self, s: str) -> bool:
    brackets = []
    for bracket in s:
      if bracket == '(' or bracket == '[' or bracket == '{':
        brackets.append(bracket)
      elif len(brackets) != 0:
        leftBracket = brackets.pop()
        if leftBracket != '(' and bracket == ')':
          return False
        elif leftBracket != '[' and bracket == ']':
          return False
        elif leftBracket != '{' and bracket == '}':
          return False
      else:
        return False
    return len(brackets) == 0

      