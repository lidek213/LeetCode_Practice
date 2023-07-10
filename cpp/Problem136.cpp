/*
 * Problem: 136. Single Number
 * URL: https://leetcode.com/problems/single-number/
 * Difficulty: Easy
 * Tags: Bitwise Operation
 */

#include <vector>

using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int result = 0;
		for (int num : nums) {
			result ^= num;
		}
		return result;
	}
};