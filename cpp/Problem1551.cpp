/*
 * Problem: 1551. Minimum Operations to Make Array Equal
 * URL: https://leetcode.com/problems/minimum-operations-to-make-array-equal/
 * Difficulty: Medium
 * Tags: Math
 */

/* 
 * Regular Pattern
 * ans | n | sequences
 *   0 | 1 | 1, (0)
 *   1 | 2 | 1,3, (1)
 *   2 | 3 | 1,3, 5, (2)
 *   4 | 4 | 1,3, 5, 7, (3 + 1)
 *   6 | 5 | 1,3, 5, 7, 9, (4 + 2)
 *   9 | 6 | 1,3, 5, 7, 9, 11, (5 + 3 + 1)
 *  12 | 7 | 1,3, 5, 7, 9, 11, 13, (6 + 4 + 2)
 *  16 | 8 | 1,3, 5, 7, 9, 11, 13, 15, (7 + 5 + 3 + 1)
 *  20 | 9 | 1,3, 5, 7, 9, 11, 13, 15, 17 (8 + 6 + 4 + 2)
 */

class Solution {
public:
	int minOperations(int n) {
		return (n + (n & 1)) * (n / 2) / 2; // ((n - 1) + (1 + (n & 1))) * (n / 2) / 2
	}
};
