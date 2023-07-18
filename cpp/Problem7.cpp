/*
 * Problem: 7. Reverse Integer
 * URL: https://leetcode.com/problems/reverse-integer/
 * Difficulty: Medium
 * Tags: Math
 */

#include <climits>

class Solution {
public:
	int reverse(int x) {
		long long result = 0;
		while (x) {
			result = result * 10 + x % 10;
			x /= 10;
		}
		if (result < INT_MIN || result > INT_MAX) {
			return 0;
		}
		return (int) result;
	}
};