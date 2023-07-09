/*
 * Problem: 119. Pascal's Triangle II
 * URL: https://leetcode.com/problems/pascals-triangle/
 * Difficulty: Easy
 * Tags: Array, Dynamic Programming(DP)
 */

#include <vector>

using namespace std;

class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> results(rowIndex + 1, 1);
		for (int i = 2, length = rowIndex + 1; i < length; i++) {
			for (int j = i - 1; j > 0; j--) {
				results[j] = results[j] + results[j - 1];
			}
		}
		return results;
	}
};