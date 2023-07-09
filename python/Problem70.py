# Problem: 70. Climbing Stairs
# URL: https://leetcode.com/problems/climbing-stairs/
# Difficulty: Easy
# Tags: Array, Dynamic Programming(DP)

from typing import List

class Solution:
  def climbStairs(self, n: int) -> int:
    results: List[int] = [0] * 46
    results[0] = 1
    results[1] = 1
    
    for i in range(2, 46):
      results[i] = results[i - 1] + results[i - 2]
    
    return results[n]