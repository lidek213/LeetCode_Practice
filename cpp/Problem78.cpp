/*
 * Problem: 78. Subsets
 * URL: https://leetcode.com/problems/subsets/
 * Difficulty: Medium
 * Tags: Array, Permutation, Backtracking
 */

#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>> subsets;
		backtrack(subsets, nums, 0);
		return subsets;
	}

private:
	vector<int> permutations;
	void backtrack(vector<vector<int>> &results, vector<int> &nums, int index) {
		results.push_back(permutations);
		for (int i = index; i < nums.size(); i++) {
			permutations.push_back(nums[i]);
			backtrack(results, nums, i + 1);
			permutations.pop_back();
		}
	}
};