/*
 * Problem: 90. Subsets II
 * URL: https://leetcode.com/problems/subsets-ii/
 * Difficulty: Medium
 * Tags: Array, Permutation, Backtracking
 */

#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		vector<vector<int>> subsets;
		sort(nums.begin(), nums.end());
		backtrack(subsets, nums, 0);
		return subsets;
	}

private:
	vector<int> permutations;
	void backtrack(vector<vector<int>> &results, vector<int> &nums, int index) {
		results.push_back(permutations);
		for (int i = index; i < nums.size(); i++) {
			if (i != index && nums[i] == nums[i - 1]) {
				continue;
			}
			permutations.push_back(nums[i]);
			backtrack(results, nums, i + 1);
			permutations.pop_back();
		}
	}
};