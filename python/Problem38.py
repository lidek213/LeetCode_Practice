# Problem: 38. Count and Say
# URL: https://leetcode.com/problems/count-and-say/
# Difficulty: Medium
# Tags: String

class Solution:
  def countAndSay(self, n: int) -> str:
    say: str = "1"
    for i in range(1, n):
      newSay: str = ""
      prevDigit: chr = say[0]
      count: int = 1
      for j in range(1, len(say)):
        if prevDigit == say[j]:
          count += 1
        else:
          newSay += str(count) + str(prevDigit)
          prevDigit = say[j]
          count = 1
      newSay += str(count) + str(prevDigit)
      say = newSay
    return say