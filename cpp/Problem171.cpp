/*
 * Problem: 171. Excel Sheet Column Number
 * URL: https://leetcode.com/problems/excel-sheet-column-number/
 * Difficulty: Easy
 * Tags: String
 */

#include <string>

using namespace std;

class Solution {
public:
	int titleToNumber(string columnTitle) {
		int number = 0;
		for (int i = 0, length = columnTitle.length(); i < length; i++) {
			number = number * 26 + (columnTitle[i] - 'A') + 1;
		}
		return number;
	}
};