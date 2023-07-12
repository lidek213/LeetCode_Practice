/*
 * Problem: 217. Contains Duplicate
 * URL: https://leetcode.com/problems/contains-duplicate/
 * Difficulty: Easy
 * Tags: Array, Set
 */

#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		unordered_set<int> seen;
		for (int num : nums) {
			if (seen.count(num) > 0) {
				return true;
			}
			seen.insert(num);
		}
		return false;
	}
};