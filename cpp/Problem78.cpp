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
		subsets.push_back(vector<int>());
		for (int num : nums) {
			for (vector<int> subset : subsets) {
				subset.push_back(num);
				subsets.push_back(subset);
				subset.pop_back();
			}
		}
		return subsets;
	}
};