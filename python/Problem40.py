# Problem: 40. Combination Sum II
# URL: https://leetcode.com/problems/combination-sum-ii/
# Difficulty: Medium
# Tags: Array, Permutation, Backtracking

from typing import List

class Solution:
  def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
    results: List[List[int]] = []
    permutations: List[int] = []
    def backtrack(target: int, index: int):
      if target == 0:
        results.append(permutations[:])
        return
      for i in range(index, len(candidates)):
        if candidates[i] > target:
          break
        if i > index and candidates[i] == candidates[i - 1]:
          continue
        permutations.append(candidates[i])
        backtrack(target - candidates[i], i + 1)
        permutations.pop()
    candidates = sorted(candidates)
    backtrack(target, 0)
    return results