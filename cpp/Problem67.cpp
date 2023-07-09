/*
 * Problem: 67. Add Binary
 * URL: https://leetcode.com/problems/add-binary/
 * Difficulty: Easy
 * Tags: String
 */

#include <string>

using namespace std;

class Solution {
public:
	string addBinary(string a, string b) {
		string result = "";
		int i = a.length() - 1;
		int j = b.length() - 1;
		int carry = 0;
		while (i >= 0 || j >= 0) {
			int sum = carry;
			if (i >= 0) {
				sum += a[i] - '0';
				i--;
			}
			if (j >= 0) {
				sum += b[j] - '0';
				j--;
			}
			carry = sum / 2;
			sum %= 2;
			result += to_string(sum);
		}
		
		if (carry != 0) {
			result += to_string(carry);
		}
		
		reverse(result.begin(), result.end());
		return result;
	}
};