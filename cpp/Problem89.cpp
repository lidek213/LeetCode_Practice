/*
 * Problem: 89. Gray Code
 * URL: https://leetcode.com/problems/gray-code/
 * Difficulty: Medium
 * Tags: Bitwise Operation
 */

#include <vector>

using namespace std;

class Solution {
public:
	vector<int> grayCode(int n) {
		vector<int> results;
		int grayCode = 0;
		for (int i = 0; i < 2 << (n-1); i++) {
			grayCode ^= i & (-i);
			results.push_back(grayCode);
		}
		return results;
	}
};