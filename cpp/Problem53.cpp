/*
 * Problem: 53. Maximum Subarray
 * URL: https://leetcode.com/problems/maximum-subarray/
 * Difficulty: Medium
 * Tags: Array
 */

#include <vector>

using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int sum = 0, maxSum = nums[0];
		for (int i = 0, size = nums.size(); i < size; i++) {
			sum += nums[i];
			if (sum > maxSum) {
				maxSum = sum;
			}
			if (sum < 0) {
				sum = 0;
			}
		}
		return maxSum;
	}
};