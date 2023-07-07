/*
 * Problem: 50. Pow(x, n)
 * URL: https://leetcode.com/problems/powx-n
 * Difficulty: Easy
 * Tags: Math
 */

class Solution {
public:
	double myPow(double x, int n) {
		long m = n;
		if (m < 0) {
			x = 1 / x;
			m = -m;
		}
		if (m == 0) {
			return 1;
		}
		double y = 1;
		while (m > 1) {
			if (m % 2 == 0) {
				x *= x;
				m /= 2;
			} else {
				y *= x;
				x *= x;
				m /= 2;
			}
		}
		return x * y;
	}
};