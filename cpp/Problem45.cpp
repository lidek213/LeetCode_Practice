/*
 * Problem: 45. Jump Game II
 * URL: https://leetcode.com/problems/jump-game-ii/
 * Difficulty: Medium
 * Tags: Array
 */

#include <cmath>
#include <vector>

using namespace std;

class Solution {
public:
	int jump(vector<int>& nums) {
		int result = 0;
		int size = nums.size();
		for (int i = 1; i < size; i++) {
			nums[i] = max(nums[i] + i, nums[i - 1]);
		}
		int pos = 0;
		while (pos < size - 1) {
			result++;
			pos = nums[pos];
		}
		return result;
	}
};