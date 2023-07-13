/*
 * Problem: 38. Count and Say
 * URL: https://leetcode.com/problems/count-and-say/
 * Difficulty: Medium
 * Tags: String
 */
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	string countAndSay(int n) {
		vector<char> say = {'1'};
		vector<char> newSay;
		for (int i = 1; i < n; i++) {
			newSay.clear();
			char prevDigit = say[0];
			int count = 1;
			for (int j = 1, size = say.size(); j < size; j++) {
				if (prevDigit == say[j]) {
					count++;
				} else {
					newSay.push_back(count + '0');
					newSay.push_back(prevDigit);
					prevDigit = say[j];
					count = 1;
				}
			}
			newSay.push_back(count + '0');
			newSay.push_back(prevDigit);
			say = newSay;
		}
		return string(say.begin(), say.end());
	}
};