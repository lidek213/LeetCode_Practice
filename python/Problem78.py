# Problem: 78. Subsets
# URL: https://leetcode.com/problems/subsets/
# Difficulty: Medium
# Tags: Array, Permutation, Backtracking

from typing import List

class Solution:
  def subsets(self, nums: List[int]) -> List[List[int]]:
    subsets: List[List[int]] = []
    permutations: List[int] = []
    def backtrack(index: int):
      subsets.append(permutations[:])
      for i in range(index, len(nums)):
        permutations.append(nums[i])
        backtrack(i + 1)
        permutations.pop()
    backtrack(0)
    return subsets