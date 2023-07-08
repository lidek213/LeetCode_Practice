/*
 * Problem: 27. Remove Element
 * URL: https://leetcode.com/problems/remove-element/
 * Difficulty: Easy
 * Tags: Array
 */

#include <vector>

using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int numSize = 0, size = nums.size();
		for (int i = 0; i < size; i++) {
			if (nums[i] != val) {
				nums[numSize] = nums[i];
				numSize++;
			}
		}
		return numSize;
	}
};