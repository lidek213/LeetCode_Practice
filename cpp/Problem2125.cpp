/*
 * Problem: 2125. Number of Laser Beams in a Bank
 * URL: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
 * Difficulty: Medium
 * Tags: Math
 */

#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	int numberOfBeams(vector<string>& bank) {
		int result = 0, prevLasterCount = 0;
		for (string &b : bank) {
			int currLasterCount = count(b.begin(), b.end(), '1');
			if (currLasterCount != 0 ){
				result += prevLasterCount * currLasterCount;
				prevLasterCount = currLasterCount;
			}
		}
		return result;
	}
};