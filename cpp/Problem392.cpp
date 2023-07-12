/*
 * Problem: 392. Is Subsequence
 * URL: https://leetcode.com/problems/is-subsequence/
 * Difficulty: Easy
 * Tags: Array, String, Subsequence
 */

#include <string>

using namespace std;

class Solution {
public:
	bool isSubsequence(string s, string t) {
		int i = 0, j = 0;
		for (; i < s.length() && j < t.length(); j++) {
			if (s[i] == t[j]) {
				i++;
			}
		}
		return i == s.length();
	}
};