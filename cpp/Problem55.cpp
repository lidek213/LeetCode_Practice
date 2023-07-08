/*
 * Problem: 55. Jump Game
 * URL: https://leetcode.com/problems/jump-game/
 * Difficulty: Medium
 * Tags: Array, Math
 */

#include <vector>

using namespace std;

class Solution {
public:
	bool canJump(vector<int>& nums) {
		int endIndex = nums.size() - 1;
		for (int i = endIndex; i >= 0; i--) {
			if (i + nums[i] >= endIndex) {
				endIndex = i;
			}
		}
		return endIndex == 0;
	}
};