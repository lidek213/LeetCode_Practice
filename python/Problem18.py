# Problem: 18. 4Sum
# URL: https://leetcode.com/problems/4sum/
# Difficulty: Medium
# Tags: Array, Sort

from typing import List

class Solution:
  def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
    results: List[List[int]] = []
    nums = sorted(nums)

    length: int = len(nums)
    i: int = 0
    while i < length:
      j: int = i + 1
      while j < length:
        newTarget: int = target - nums[i] - nums[j]
        left: int = j + 1
        right: int = length - 1
        while left < right:
          if left < right and nums[left] + nums[right] < newTarget:
            left += 1
          elif left < right and nums[left] + nums[right] > newTarget:
            right -= 1
          else:
            results.append([nums[i], nums[j], nums[left], nums[right]])
            tmpLeft: int = left
            tmpRight: int = right
            while left < right and nums[left] == nums[tmpLeft]:
              left += 1
            while left < right and nums[right] == nums[tmpRight]:
              right -= 1
        while j + 1 < length and nums[j] == nums[j + 1]:
          j += 1
        j += 1
      while i + 1 < length and nums[i] == nums[i + 1]:
        i += 1
      i += 1
    return results