/*
 * Problem: 461. Hamming Distance
 * URL: https://leetcode.com/problems/hamming-distance/
 * Difficulty: Easy
 * Tags: Bitwise Operation
 */

class Solution {
public:
	int hammingDistance(int x, int y) {
		int tmp = x ^ y, distance = 0;
		while (tmp > 0) {
			distance++;
			tmp &= tmp - 1;
		}
		return distance;
	}
};