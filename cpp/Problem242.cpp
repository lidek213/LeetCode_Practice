/*
 * Problem: 242. Valid Anagram
 * URL: https://leetcode.com/problems/valid-anagram/
 * Difficulty: Easy
 * Tags: Array
 */

#include <string>

using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {
		int letterFrequency[26] = {0};
		for (char &c : s) {
			letterFrequency[c - 'a']++;
		}
		for (char &c : t) {
			letterFrequency[c - 'a']--;
		}
		for (int i = 0; i < 26; i++) {
			if (letterFrequency[i]) {
				return false;
			}
		}
		return true;
	}
};