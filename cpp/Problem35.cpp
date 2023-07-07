/*
 * Problem: 35. Search Insert Position
 * URL: https://leetcode.com/problems/search-insert-position
 * Difficulty: Easy
 * Tags: Array, Binary Search
 */
#include <vector>

using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int leftIndex = 0, rightIndex = nums.size() - 1;

		while (leftIndex <= rightIndex) {
			int midIndex = leftIndex + (rightIndex - leftIndex) / 2;
			if (nums[midIndex] == target) {
				return midIndex;
			} else if (nums[midIndex] < target) {
				leftIndex = midIndex + 1;
			} else {
				rightIndex = midIndex - 1;
			}
		}
		
		return leftIndex;
    }
};