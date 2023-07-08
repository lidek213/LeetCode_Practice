/*
 * Problem: 66. Plus One
 * URL: https://leetcode.com/problems/plus-one/
 * Difficulty: Easy
 * Tags: Array
 */

#include <vector>

using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int carry = 1;
		int i = digits.size() - 1;
		while (carry != 0 && i >= 0) {
			digits[i] += carry;
			carry = digits[i] / 10;
			digits[i] %= 10;
			i--;
		}
		if (carry != 0) {
			vector<int>::iterator it = digits.begin();
			digits.insert(it, carry);
		}
		return digits;
	}
};