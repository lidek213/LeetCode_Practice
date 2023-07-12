/*
 * Problem: 264. Ugly Number II
 * URL: https://leetcode.com/problems/ugly-number/
 * Difficulty: Easy
 * Tags: Math, Array
 */

#include <vector>

using namespace std;

class Solution {
public:
	int nthUglyNumber(int n) {
		int length = 3;
		int minUgly, minIndex, tmp;
		int primes[] = {2, 3, 5};
		vector<int> uglyNumbers(n, 0);
		vector<int> uglyNumbersIndex(length, 0);
		uglyNumbers[0] = 1;
		for (int i = 1; i < n; i++) {
			minUgly = uglyNumbers[uglyNumbersIndex[0]] * primes[0];
			minIndex = 0;
			for (int j = 1; j < length; j++) {
				tmp = uglyNumbers[uglyNumbersIndex[j]] * primes[j];
				if (minUgly == tmp) {
					uglyNumbersIndex[j]++;
				} else if (minUgly > tmp) {
					minUgly = tmp;
					minIndex = j;
				}
			}
			uglyNumbers[i] = minUgly;
			uglyNumbersIndex[minIndex]++;
		}
		return uglyNumbers[n - 1];
	}
};