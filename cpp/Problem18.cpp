/*
 * Problem: 18. 4Sum
 * URL: https://leetcode.com/problems/4sum/
 * Difficulty: Medium
 * Tags: Array, Sort
 */

#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> results;
		sort(nums.begin(), nums.end());

		for (int i = 0, size = nums.size(); i < size; i++) {
			for (int j = i + 1; j < size; j++) {
				long newTarget = (long)target - (long)nums[i] - (long)nums[j];
				int left = j + 1, right = size - 1;
				while (left < right) {
					if (left < right && nums[left] + nums[right] < newTarget) {
						left++;
					} else if (left < right && nums[left] + nums[right] > newTarget) {
						right--;
					} else {
						results.push_back(vector<int> {nums[i], nums[j], nums[left], nums[right]});
						int tmpLeft = left, tmpRight = right;
						while (left < right && nums[left] == nums[tmpLeft]) {
							left++;
						}
						while (left < right && nums[right] == nums[tmpRight]) {
							right--;
						}
					}
				}
				while (j + 1 < size && nums[j] == nums[j + 1]) {
					j++;
				}
			}
			while (i + 1 < size && nums[i] == nums[i + 1]) {
				i++;
			}
		}
		return results;
	}
};