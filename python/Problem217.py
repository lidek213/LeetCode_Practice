# Problem: 217. Contains Duplicate
# URL: https://leetcode.com/problems/contains-duplicate/
# Difficulty: Easy
# Tags: Array, Set

from typing import List

class Solution:
  def containsDuplicate(self, nums: List[int]) -> bool:
    seen: set[int] = set()
    for num in nums:
      if num in seen:
        return True
      seen.add(num)
    return False