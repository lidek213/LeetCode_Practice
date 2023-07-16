/*
 * Problem: 28. Find the Index of the First Occurrence in a String
 * URL: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 * Difficulty: Easy
 * Tags: Array, String, Knuth-Morris-Pratt(KMP) Algorithm
 */

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {
		int haystackLength = haystack.length(), needleLength = needle.length();
		vector<int> lastIndexs(needle.length(), 0);
		int prevIndex = 0;
		for (int i = 1; i < needleLength; i++) {
			while (prevIndex > 0 && needle[i] != needle[prevIndex]) {
				prevIndex = lastIndexs[prevIndex - 1];
			}
			if (needle[i] == needle[prevIndex]) {
				prevIndex++;
				lastIndexs[i] = prevIndex;
			}
		}
		int needleIndex = 0;
		for (int i = 0; i < haystackLength; i++) {
			while (needleIndex > 0 && haystack[i] != needle[needleIndex]) {
				needleIndex = lastIndexs[needleIndex - 1];
			}
			if (haystack[i] == needle[needleIndex]) {
				needleIndex++;
			}
			if (needleIndex == needleLength) {
				return i - needleIndex + 1;
			}
		}
		return -1;
	}
};