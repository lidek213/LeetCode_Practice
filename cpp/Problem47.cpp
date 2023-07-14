/*
 * Problem: 47. Permutations II
 * URL: https://leetcode.com/problems/permutations-ii/
 * Difficulty: Medium
 * Tags: Array, Permutation, Backtracking
 */

#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		for (int n : nums) {
			counts[n]++;
		}
		vector<vector<int>> results;
		backtrack(results, nums);
		return results;
	}

private:
	unordered_map<int, int> counts;
	vector<int> permutations;
	void backtrack(vector<vector<int>> &results, vector<int> &nums) {
		if (permutations.size() == nums.size()) {
			results.push_back(permutations);
			return;
		}
		for (auto itr = counts.begin(); itr != counts.end(); itr++) {
			if (itr->second > 0) {
				permutations.push_back(itr->first);
				itr->second -= 1;
				backtrack(results, nums);
				itr->second += 1;
				permutations.pop_back();
			}
		}
	}
};