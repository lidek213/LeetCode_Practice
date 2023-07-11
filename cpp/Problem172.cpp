/*
 * Problem: 172. Factorial Trailing Zeroes
 * URL: https://leetcode.com/problems/factorial-trailing-zeroes/
 * Difficulty: Medium
 * Tags: Math
 */

class Solution {
public:
	int trailingZeroes(int n) {
		int result = 0;
		while (n > 0) {
			n /= 5;
			result += n;
		}
		return result;
	}
};