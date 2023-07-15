/*
 * Problem: 40. Combination Sum II
 * URL: https://leetcode.com/problems/combination-sum-ii/
 * Difficulty: Medium
 * Tags: Array, Permutation, Backtracking
 */

#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
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
			if (i > index && candidates[i] == candidates[i - 1]) {
				continue;
			}
			permutations.push_back(candidates[i]);
			backtrack(results, candidates, permutations, target - candidates[i], i + 1);
			permutations.pop_back();
		}
	}
};