# Problem: 47. Permutations II
# URL: https://leetcode.com/problems/permutations-ii/
# Difficulty: Medium
# Tags: Array, Permutation, Backtracking

from typing import List

class Solution:
  def permuteUnique(self, nums: List[int]) -> List[List[int]]:
    count: dict = {n:0 for n in nums}
    results: List[List[int]] = []
    permutations: List[int] = []
    for n in nums:
      count[n] += 1
    def backtrack():
      if len(permutations) == len(nums):
        results.append(permutations[:])
        return
      for n in count:
        if count[n] > 0:
          permutations.append(n)
          count[n] -= 1
          backtrack()
          count[n] += 1
          permutations.pop()
    backtrack()
    return results