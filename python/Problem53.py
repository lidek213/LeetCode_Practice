# Problem: 53. Maximum Subarray
# URL: https://leetcode.com/problems/maximum-subarray/
# Difficulty: Medium
# Tags: Array

from typing import List

class Solution:
  def maxSubArray(self, nums: List[int]) -> int:
    sum: int = 0
    maxSum: int = nums[0]
    for num in nums:
      sum += num
      if sum > maxSum:
        maxSum = sum
      if sum < 0:
        sum = 0
    return maxSum