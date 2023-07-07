/*
 * Problem: 15. 3Sum
 * URL: https://leetcode.com/problems/3sum/
 * Difficulty: Medium
 * Tags: Array, Sort,
 */

#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int> &nums) {
		vector<vector<int>> results;
		sort(nums.begin(), nums.end());
		for (int i = 0, size = nums.size(); i < size; i++) {
			if (i > 0 && nums[i] == nums[i - 1]) {
				continue;
			}
			int j = i + 1;
			int k = size - 1;
			int sum = 0;
			while (j < k) {
				sum = nums[i] + nums[j] + nums[k];
				if (sum == 0) {
					results.push_back({nums[i], nums[j], nums[k]});
					do {
						j++;
					} while (j < k && nums[j] == nums[j - 1]);
					do {
						k--;
					} while (j < k && nums[k] == nums[k + 1]);
				} else if (sum < 0) {
					j++;
				} else {
					k--;
				}
			}
		}
		return results;
	}
};