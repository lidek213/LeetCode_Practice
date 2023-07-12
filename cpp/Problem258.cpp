/*
 * Problem: 258. Add Digits
 * URL: https://leetcode.com/problems/add-digits/
 * Difficulty: Easy
 * Tags: Math
 */

class Solution {
public:
	int addDigits(int num) {
		if (num != 0 && num % 9 == 0) {
			return 9;
		}
		return num % 9;
	}
};