# Problem: 492. Construct the Rectangle
# URL: https://leetcode.com/problems/construct-the-rectangle/
# Difficulty: Easy
# Tags: Math

import math
from typing import List

class Solution:
  def constructRectangle(self, area: int) -> List[int]:
    results: List[int] = [0] * 2
    for i in range(int(math.sqrt(area)), 0, -1):
      if area % i == 0:
        results[0] = area // i
        results[1] = i
        break
    return results