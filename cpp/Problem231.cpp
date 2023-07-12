/*
 * Problem: 231. Power of Two
 * URL: https://leetcode.com/problems/power-of-two/
 * Difficulty: Easy
 * Tags: Bitwise Operation
 */

class Solution {
public:
	bool isPowerOfTwo(int n) {
		return n > 0 && (n & (n - 1)) == 0;
	}
};