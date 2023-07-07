/*
 * Problem: 1. Two Sum
 * URL: https://leetcode.com/problems/two-sum/
 * Difficulty: Easy
 * Tags: Array, Map
 */

#include <vector>
#include <map>
#include <iterator>
#include <utility>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int> &nums, int target) {
		map<int, int> mapNum;
		map<int, int>::iterator it;
		for (int i = 0, length = nums.size(); i < length; i++) {
			it = mapNum.find(nums[i]);
			if (it != mapNum.end()) {
				return {it->second, i};
			}
			mapNum.insert(pair<int, int>(target - nums[i], i));
		}
		return {};
	}
};