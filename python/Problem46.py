# Problem: 46. Permutations
# URL: https://leetcode.com/problems/permutations/
# Difficulty: Medium
# Tags: Array, Permutation, Backtracking

from typing import List

class Solution:
  def permute(self, nums: List[int]) -> List[List[int]]:
    results: List[List[int]] = []
    self.backtrack(results, nums, 0)
    return results

  def backtrack(self, results: List[List[int]], nums: List[int], index: int):
    if index == len(nums):
      results.append(list(nums))
      return
    for i in range(index, len(nums)):
      nums[index], nums[i] = nums[i], nums[index]
      self.backtrack(results, nums, index + 1)
      nums[index], nums[i] = nums[i], nums[index]