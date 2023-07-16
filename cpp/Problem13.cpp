/*
 * Problem: 13. Roman to Integer
 * URL: https://leetcode.com/problems/roman-to-integer/
 * Difficulty: Easy
 * Tags: Map
 */

#include <string>

using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		int len = s.length();
		
		int* values = new int[len];
		char romanNumerals[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
		int romanToNumbers[7] = {1, 5, 10, 50, 100, 500, 1000};

		for (int i = 0; i < len; i++) {
			for (int j = 0; j < 7; j++) {
				if (s[i] == romanNumerals[j]) {
					values[i] = romanToNumbers[j];
					break;
				}
			}
		}

		int result = 0;
		for (int i = 0; i < len; i++) {
			if (i + 1 < len && values[i] < values[i + 1]) {
				result -= values[i];
			} else {
				result += values[i];
			}
		}
		delete[] values;
		return result;
	}
};