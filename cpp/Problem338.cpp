/*
 * Problem: 338. Counting Bits
 * URL: https://leetcode.com/problems/counting-bits/
 * Difficulty: Easy
 * Tags: Array, Dynamic Programming(DP)
 */

#include <vector>

using namespace std;

class Solution {
public:
	vector<int> countBits(int n) {
		if (n == 0) {
			return vector<int> {0};
		}
		if (n == 1) {
			return vector<int> {0, 1};
		}
		vector<int> result {0, 1};
		for (int i = 2; i <= n; i++) {
			result.push_back(result[i / 2] + (i % 2));
		}
		return result;
	}
};