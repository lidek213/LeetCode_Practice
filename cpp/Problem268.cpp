/*
 * Problem: 268. Missing Number
 * URL: https://leetcode.com/problems/missing-number/
 * Difficulty: Easy
 * Tags: Bitwise Operation
 */

#include <vector>

using namespace std;

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int m = 0;
		for (int i = 1, size = nums.size(); i <= size; i++) {
			m ^= i;
		}
		for (int num : nums) {
			m ^= num;
		}
		return m;
	}
};