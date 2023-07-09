# Problem: 69. Sqrt(x)
# URL: https://leetcode.com/problems/sqrtx/
# Difficulty: Easy
# Tags: Math, Binary Search

class Solution:
  def mySqrt(self, x: int) -> int:
    left: int = 1
    right: int = x
    while left <= right:
      mid: int = left + (right - left) // 2
      temp: int = x // mid
      if mid == temp:
        return mid
      elif mid < temp:
        left = mid + 1
      else:
        right = mid - 1
    return right