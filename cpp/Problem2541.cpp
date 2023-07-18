/*
 * Problem: 2541. Minimum Operations to Make Array Equal II
 * URL: https://leetcode.com/problems/minimum-operations-to-make-array-equal-ii/
 * Difficulty: Medium
 * Tags: Math
 */

#include <vector>

using namespace std;

class Solution {
public:
	long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
		int add = 0, sub = 0, tmp;
		for (int i = 0, size = nums1.size(); i < size; i++) {
			if (k == 0 && nums1[i] != nums2[i]) {
				return -1;
			}
			if (nums1[i] == nums2[i]) {
				continue;
			}
			if (nums1[i] < nums2[i]) {
				tmp = nums2[i] - nums1[i];
				if (tmp % k != 0) {
					return -1;
				}
				add += tmp;
			} else {
				tmp = nums1[i] - nums2[i];
				if (tmp % k != 0) {
					return -1;
				}
				sub += tmp;
			}
		}
		if (k == 0) {
			return 0;
		}
		return add == sub ? add / k : -1;
	}
};
