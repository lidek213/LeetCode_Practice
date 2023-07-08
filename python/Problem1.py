# Problem: 1. Two Sum
# URL: https://leetcode.com/problems/two-sum/
# Difficulty: Easy
# Tags: Array, Dictionary

from typing import List

class Solution:
	def twoSum(self, nums: List[int], target: int) -> List[int]:
		dict = {}
		for i, num in enumerate(nums):
			if dict.get(num) != None:
				return [dict[num], i]
			dict[target - num] = i
		return []