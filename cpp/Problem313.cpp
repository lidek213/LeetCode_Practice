/*
 * Problem: 313. Super Ugly Number
 * URL: https://leetcode.com/problems/super-ugly-number/
 * Difficulty: Medium
 * Tags: Math, Array
 */

#include <vector>

using namespace std;

class Solution {
public:
	int nthSuperUglyNumber(int n, vector<int>& primes) {
		int length = primes.size(), minIndex;
		long minUgly, tmp;
		vector<long> uglyNumbers(n, 0);
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