/*
 * Problem: 88. Merge Sorted Array
 * URL: https://leetcode.com/problems/merge-sorted-array/
 * Difficulty: Easy
 * Tags: Array, Sort
 */

#include <vector>

using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int nums1CurrentIndex = m - 1;
		int nums2CurrentIndex = n - 1;
		int newNumsCurrentIndex = m + n - 1;
		
		while (nums2CurrentIndex >= 0) {
			if (nums1CurrentIndex >= 0 && nums1[nums1CurrentIndex] > nums2[nums2CurrentIndex]) {
				nums1[newNumsCurrentIndex] = nums1[nums1CurrentIndex];
				newNumsCurrentIndex--;
				nums1CurrentIndex--;
			} else {
				nums1[newNumsCurrentIndex] = nums2[nums2CurrentIndex];
				newNumsCurrentIndex--;
				nums2CurrentIndex--;
			}
		}
	}
};