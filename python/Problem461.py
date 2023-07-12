# Problem: 461. Hamming Distance
# URL: https://leetcode.com/problems/hamming-distance/
# Difficulty: Easy
# Tags: Bitwise Operation

class Solution:
  def hammingDistance(self, x: int, y: int) -> int:
    tmp: int = x ^ y
    distance: int = 0
    while tmp > 0:
      distance += 1
      tmp &= tmp -1
    return distance