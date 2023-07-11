/*
 * Problem: 191. Number of 1 Bits
 * URL: https://leetcode.com/problems/number-of-1-bits/description/
 * Difficulty: Easy
 * Tags: Bitwise Operation
 */

#include <stdint.h>

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int weight = 0;
		while (n) {
			weight += n & 1;
			n >>= 1;
		}
		return weight;
	}
};