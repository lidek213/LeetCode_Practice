# Problem: 1995. Count Special Quadruplets
# URL: https://leetcode.com/problems/count-special-quadruplets/
# Difficulty: Easy
# Tags: Array

from typing import List
from collections import defaultdict

class Solution:
  def countQuadruplets(self, nums: List[int]) -> int:
    result: int = 0
    length: int = len(nums)

    count: dict = defaultdict(lambda: 0)
    count[nums[length - 1] - nums[length - 2]] = 1

    for i in range(length - 3, 0, -1):
      for j in range(i - 1, -1, -1):
        result += count[nums[i] + nums[j]]
      for k in range(length - 1, i, -1):
        count[nums[k] - nums[i]] += 1
    return result