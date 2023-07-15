# Problem: 90. Subsets II
# URL: https://leetcode.com/problems/subsets-ii/
# Difficulty: Medium
# Tags: Array, Permutation, Backtracking

from typing import List

class Solution:
  def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
    subsets: List[List[int]] = []
    permutations: List[int] = []
    def backtrack(index: int):
      subsets.append(permutations[:])
      for i in range(index, len(nums)):
        if i != index and nums[i] == nums[i - 1]:
          continue
        permutations.append(nums[i])
        backtrack(i + 1)
        permutations.pop()
    nums = sorted(nums)
    backtrack(0)
    return subsets