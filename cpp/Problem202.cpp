/*
 * Problem: 202. Happy Number
 * URL: https://leetcode.com/problems/happy-number/
 * Difficulty: Easy
 * Tags: Math
 */

#include <set>

using namespace std;

class Solution {
public:
	bool isHappy(int n) {
		int squaresTable[] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};
		set<int> existNumber;
		int sum = 0;
		while (existNumber.find(n) == existNumber.end()) {
			existNumber.insert(n);
			sum = 0;
			while (n > 0) {
				sum += squaresTable[n % 10];
				n /= 10;
			}
			n = sum;
		}
		return existNumber.find(1) != existNumber.end();
	}
};