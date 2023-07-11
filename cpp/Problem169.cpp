/*
 * Problem: 169. Majority Element
 * URL: https://leetcode.com/problems/majority-element/
 * Difficulty: Easy
 * Tags: Array
 */

#include <vector>

using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int count = 0;
		int candidate = 0;
		for (int num : nums) {
			if (count == 0) {
				candidate = num;
			}
			count += (num == candidate) ? 1 : -1;
		}
		return candidate;
	}
};