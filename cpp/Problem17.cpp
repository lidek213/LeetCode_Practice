/*
 * 17. Letter Combinations of a Phone Number
 * URL: https://leetcode.com/problems/letter-combinations-of-a-phone-numbe
 * Difficulty: Medium
 * Tags: Array, Recursion, Combinations
 */

#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	vector<string> letterCombinations(string digits) {
		digitToLetters['2'] = "abc";
		digitToLetters['3'] = "def";
		digitToLetters['4'] = "ghi";
		digitToLetters['5'] = "jkl";
		digitToLetters['6'] = "mno";
		digitToLetters['7'] = "pqrs";
		digitToLetters['8'] = "tuv";
		digitToLetters['9'] = "wxyz";

		vector<string> results;
		if (digits.length() > 0) {
			string s = "";
			combinations(results, digits, 0, s);
		}
		return results;
	}

	void combinations(vector<string> &results, string &digits, int index, string &s) {
		if (index >= digits.length()) {
			results.push_back(s);
			return;
		}

		string letters = digitToLetters[digits.at(index)];
		for (int i = 0, length = letters.length(); i < length; i++) {
			s.push_back(letters.at(i));
			combinations(results, digits, index + 1, s);
			s.pop_back();
		}
	}
private:
	map<char, string> digitToLetters;
};