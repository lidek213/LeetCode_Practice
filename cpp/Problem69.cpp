/*
 * Problem: 69. Sqrt(x)
 * URL: https://leetcode.com/problems/sqrtx/
 * Difficulty: Easy
 * Tags: Math, Binary Search
 */

class Solution {
public:
	int mySqrt(int x) {
		int left = 1, right = x;
		while (left <= right) {
			int mid = left + (right - left) / 2;
			int temp = x / mid;
			if (mid == temp) {
				return mid;
			} else if (mid < temp) {
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		}
		return right;
	}
};