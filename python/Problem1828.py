# Problem: 1828. Queries on Number of Points Inside a Circle
# URL: https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/
# Difficulty: Medium
# Tags: Math

from typing import List
import math

class Solution:
  def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
    answers: List[int] = [0] * len(queries)
    i: int = 0
    for q in queries:
      for p in points:
        dist = math.sqrt((p[0] - q[0]) ** 2 + (p[1] - q[1]) ** 2)
        answers[i] += 1 if dist <= q[2] else 0
      i += 1
    return answers