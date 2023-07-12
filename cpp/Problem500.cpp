/*
 * Problem: 500. Keyboard Row
 * URL: https://leetcode.com/problems/keyboard-row/
 * Difficulty: Easy
 * Tags: Array, String
 */

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	vector<string> findWords(vector<string>& words) {
		int tables[] = {1,3,3,1,2,1,1,1,2,1,1,1,3,3,2,2,2,2,1,2,2,3,2,3,2,3};
		vector<string> results;
		for (string word : words) {
			int tmp = tables[tolower(word[0]) - 'a'];
			bool added = true;
			for (int i = 1, length = word.length(); i < length && added; i++) {
				added = (tmp == tables[tolower(word[i]) - 'a']);
			}
			if (added) {
				results.push_back(word);
			}
		}
		return results;
	}
};