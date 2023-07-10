/*
 * Problem: 168. Excel Sheet Column Title
 * URL: https://leetcode.com/problems/excel-sheet-column-title/
 * Difficulty: Easy
 * Tags: String
 */

#include <string>

using namespace std;

class Solution {
public:
	string convertToTitle(int columnNumber) {
		string result;
		do {
			result.push_back((((columnNumber - 1) % 26) + 'A'));
			columnNumber = (columnNumber - 1) / 26;
		} while (columnNumber > 0);
		reverse(result.begin(), result.end());
		return result;
	}
};