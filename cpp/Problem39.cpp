/*
 * Problem: 39. Combination Sum
 * URL: https://leetcode.com/problems/combination-sum/
 * Difficulty: Medium
 * Tags: Array, Permutation, Backtracking
 */

#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<vector<int>> results;
		vector<int> permutations;
		sort(candidates.begin(), candidates.end());
		backtrack(results, candidates, permutations, target, 0);
		return results;
	}

private:
	void backtrack(vector<vector<int>>& results, vector<int>& candidates, vector<int>& permutations, int target, int index) {
		if (target == 0) {
			results.push_back(permutations);
			return;
		}
		for (int i = index; i < candidates.size() && candidates[i] <= target; i++) {
			permutations.push_back(candidates[i]);
			backtrack(results, candidates, permutations, target - candidates[i], i);
			permutations.pop_back();
		}
	}
};