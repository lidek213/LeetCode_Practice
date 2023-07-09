/*
 * Problem: 75. Sort Colors
 * URL: https://leetcode.com/problems/sort-colors/
 * Difficulty: Medium
 * Tags: Array, Dutch Flag Algorithm
 */

#include <vector>

using namespace std;

class Solution {
public:
	void sortColors(vector<int>& nums) {
		int left = 0, mid = 0, right = nums.size() - 1;
		while (mid <= right) {
			if (nums[mid] < 1) {
				swap(nums[left], nums[mid]);
				left++;
				mid++;
			} else if (nums[mid] > 1) {
				swap(nums[mid], nums[right]);
				right--;
			} else {
				mid++;
			}
		}
	}

	void swap(int &a, int &b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
};