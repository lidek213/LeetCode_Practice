/*
 * Problem: 283. Move Zeroes
 * URL: https://leetcode.com/problems/move-zeroes/
 * Difficulty: Easy
 * Tags: Array, Dutch Flag Algorithm
 */

#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		for (int i = 0, j = 0, size = nums.size(); i < size; i++) {
			if (nums[i] != 0) {
				swap(nums[i], nums[j]);
				j++;
			}
		}
	}
};