/*
 * Problem: 118. Pascal's Triangle
 * URL: https://leetcode.com/problems/pascals-triangle/
 * Difficulty: Easy
 * Tags: Array, Dynamic Programming(DP)
 */

#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
        vector<vector<int>> results;
        for (int row = 0; row < numRows; row++) {
            results.push_back(vector<int>(row + 1, 1));
            for (int col = 1; col < row; col++) {
                results[row][col] = results[row - 1][col - 1] + results[row - 1][col];
            }
        }
        return results;
	}
};