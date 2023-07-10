/*
 * Problem: 125. Valid Palindrome
 * URL: https://leetcode.com/problems/valid-palindrome/
 * Difficulty: Easy
 * Tags: String
 */

#include <string>

using namespace std;

class Solution {
public:
	bool isPalindrome(string s) {
		int i = 0;
		int j = s.length() - 1;
		while (i < j) {
			while (i < j && !isalnum(s[i])) {
				i++;
			}
			while (i < j && !isalnum(s[j])) {
				j--;
			}
			if (tolower(s[i]) != tolower(s[j])) {
				return false;
			}
			i++;
			j--;
		}
		return true;
	}
};