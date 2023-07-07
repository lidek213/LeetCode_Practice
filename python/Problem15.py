# Problem: 15. 3Sum
# URL: https://leetcode.com/problems/3sum/
# Difficulty: Medium
# Tags: Array, Sort

from typing import List

class Solution:
  def threeSum(self, nums: List[int]) -> List[List[int]]:
    results: List[List[int]] = []
    nums.sort()
    i: int = 0
    length = len(nums)
    while i < length:
      if i > 0 and nums[i] == nums[i - 1]:
        i = i + 1
        continue
      j: int = i + 1
      k: int = length - 1
      sum: int = 0
      while j < k:
        sum = nums[i] + nums[j] + nums[k]
        if sum == 0:
          results.append([nums[i], nums[j], nums[k]])
          j += 1
          while j < k and nums[j] == nums[j - 1]:
            j += 1
          k -= 1
          while j < k and nums[k] == nums[k + 1]:
            k -= 1
        elif sum < 0:
          j += 1
        else:
            k -= 1
      i += 1
    return results