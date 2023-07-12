/*
 * Problem: 1995. Count Special Quadruplets
 * URL: https://leetcode.com/problems/count-special-quadruplets/
 * Difficulty: Easy
 * Tags: Array
 */

#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
	int countQuadruplets(vector<int>& nums) {
		int result = 0;
		int size = nums.size();
		unordered_map<int, int> count;
		count[nums[size - 1] - nums[size - 2]] = 1;

		for (int i = size - 3; i > 0; i--) {
			for (int j = i - 1; j >= 0; j--) {
				result += count[nums[i] + nums[j]];
			}
			for (int k = size - 1; k > i; k--) {
				count[nums[k] - nums[i]]++;
			}
		}
		return result;
	}
};