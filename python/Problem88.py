# Problem: 88. Merge Sorted Array
# URL: https://leetcode.com/problems/merge-sorted-array/
# Difficulty: Easy
# Tags: Array, Sort

from typing import List

class Solution:
  def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
    nums1CurrentIndex: int = m - 1
    nums2CurrentIndex: int = n - 1
    newNumsCurrentIndex: int = m + n - 1
    while nums2CurrentIndex >= 0:
      if nums1CurrentIndex >= 0 and nums1[nums1CurrentIndex] > nums2[nums2CurrentIndex]:
        nums1[newNumsCurrentIndex] = nums1[nums1CurrentIndex]
        newNumsCurrentIndex -= 1
        nums1CurrentIndex -= 1
      else:
        nums1[newNumsCurrentIndex] = nums2[nums2CurrentIndex]
        newNumsCurrentIndex -= 1
        nums2CurrentIndex -= 1