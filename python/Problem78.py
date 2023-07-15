# Problem: 78. Subsets
# URL: https://leetcode.com/problems/subsets/
# Difficulty: Medium
# Tags: Array, Permutation, Backtracking

from typing import List

class Solution:
  def subsets(self, nums: List[int]) -> List[List[int]]:
    subsets: List[List[int]] = [[]]
    for num in nums:
      subsets += [subset + [num] for subset in subsets]
    return subsets