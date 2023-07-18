/*
 * Problem: 1689. Partitioning Into Minimum Number Of Deci-Binary Numbers
 * URL: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
 * Difficulty: Medium
 * Tags: String
 */

#include <string>

using namespace std;

class Solution {
public:
	int minPartitions(string n) {
		int minNum = 0;
		for (char c : n) {
			int num = c - '0';
			if (num > minNum) {
				minNum = num;
			}
		}
		return minNum;
	}
};