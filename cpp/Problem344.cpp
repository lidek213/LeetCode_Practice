/*
 * Problem: 344. Reverse String
 * URL: https://leetcode.com/problems/reverse-string/
 * Difficulty: Easy
 * Tags: Array, String, Reverse
 */

#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
	void reverseString(vector<char>& s) {
		for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
			swap(s[i], s[j]);
		}
	}
};