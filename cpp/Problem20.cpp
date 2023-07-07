/*
 * Problem: 20. Valid Parentheses
 * URL: https://leetcode.com/problems/valid-parentheses/description/
 * Difficulty: Easy
 * Tags: String, Stack
 */
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> brackets;
		for (int i = 0, length = s.length(); i < length; i++) {
			if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
				brackets.push(s[i]);
			} else if (!brackets.empty()) {
				char leftBracket = brackets.top();
				brackets.pop();
				if (leftBracket != '(' && s[i] == ')') {
					return false;
				} else if (leftBracket != '[' && s[i] ==']') {
					return false;
				} else if (leftBracket != '{' && s[i] == '}') {
					return false;
				}
			} else {
				return false;
			}
		}
		return brackets.empty();
	}
};