# Problem: 2541. Minimum Operations to Make Array Equal II
# URL: https://leetcode.com/problems/minimum-operations-to-make-array-equal-ii/
# Difficulty: Medium
# Tags: Math

from typing import List

class Solution:
  def minOperations(self, nums1: List[int], nums2: List[int], k: int) -> int:
    i: int = 0
    add: int = 0
    sub: int = 0
    tmp: int = 0
    for i in range(len(nums1)):
      if k == 0 and nums1[i] != nums2[i]:
        return -1
      if nums1[i] == nums2[i]:
        continue
      if nums1[i] < nums2[i]:
        tmp = nums2[i] - nums1[i]
        if tmp % k != 0:
          return -1
        add += tmp
      else:
        tmp = nums2[i] - nums1[i]
        if tmp % k != 0:
          return -1
        sub += tmp
    
    if k == 0:
      return 0
    return -1 if add != sub else add // k