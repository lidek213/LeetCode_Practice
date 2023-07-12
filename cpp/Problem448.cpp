/*
 * Problem: 448. Find All Numbers Disappeared in an Array
 * URL: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 * Difficulty: Easy
 * Tags: Array
 */

#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) {
		unordered_set<int> seen;
		vector<int> disappearedNumbers;
		for (int num : nums) {
			seen.insert(num);
		}
		for (int i = 1; i <= nums.size(); i++) {
			if (seen.find(i) == seen.end()) {
				disappearedNumbers.push_back(i);
			}
		}
		return disappearedNumbers;
	}
};