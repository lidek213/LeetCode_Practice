/*
 * Problem: 46. Permutations
 * URL: https://leetcode.com/problems/permutations/
 * Difficulty: Medium
 * Tags: Array, Permutation, Backtracking
 */

#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums){
		vector<vector<int>> results;
		backtrack(results, nums, 0);
		return results;
	}

	void backtrack(vector<vector<int>> &results, vector<int> &nums, int index) {
		if (index == nums.size()) {
			results.push_back(nums);
			return;
		}
		for (int i = index; i < nums.size(); i++) {
			swap(nums[index], nums[i]);
			backtrack(results, nums, index + 1);
			swap(nums[index], nums[i]);
		}
	}
};