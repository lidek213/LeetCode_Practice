# Problem: 39. Combination Sum
# URL: https://leetcode.com/problems/combination-sum/
# Difficulty: Medium
# Tags: Array, Permutation, Backtracking

from typing import List

class Solution:
  def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
    results: List[List[int]] = []
    permutations: List[int] = []
    def backtrack(target: int, index: int):
      if target == 0:
        results.append(permutations[:])
        return
      for i in range(index, len(candidates)):
        if candidates[i] > target:
          break
        permutations.append(candidates[i])
        backtrack(target - candidates[i], i)
        permutations.pop()
    candidates = sorted(candidates)
    backtrack(target, 0)
    return results