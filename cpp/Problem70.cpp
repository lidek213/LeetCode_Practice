/*
 * Problem: 70. Climbing Stairs
 * URL: https://leetcode.com/problems/climbing-stairs/
 * Difficulty: Easy
 * Tags: Array, Dynamic Programming(DP)
 */

class Solution {
public:
	int climbStairs(int n) {
		int results[46];
		results[0] = 1;
		results[1] = 1;
		for (int i = 2; i <= n; i++) {
			results[i] = results[i - 1] + results[i - 2];
		}
		return results[n];
	}
};