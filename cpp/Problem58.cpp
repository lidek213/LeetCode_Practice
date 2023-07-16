/*
 * Problem: 58. Length of Last Word
 * URL: https://leetcode.com/problems/length-of-last-word/
 * Difficulty: Easy
 * Tags: String
 */

#include <string>

using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s) {
		int startIndex = -1, endIndex = -1;
		for (int i = s.length() - 1; i >= 0; i--) {
			if (s[i] != ' ') {
				endIndex = i;
				break;
			}
		}
		for (int i = 0; i <= endIndex; i++) {
			if (startIndex == -1 && s[i] != ' ') {
				startIndex = i;
			} else if (s[i] == ' ') {
				startIndex = -1;
			}
		}
		return endIndex - startIndex + 1;
	}
};