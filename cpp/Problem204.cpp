/*
 * Problem: 204. Count Primes
 * URL: https://leetcode.com/problems/count-primes/
 * Difficulty: Medium
 * Tags: Prime
 */

#include <vector>

using namespace std;

class Solution {
public:
	int countPrimes(int n) {
		if (n < 3) {
			return 0;
		}
		vector<bool> sieve(n, false);
		vector<int> primes;
		primes.push_back(2);
		for (int i = 3; i < n; i += 2) {
			if (!sieve[i]) {
				primes.push_back(i);
			}
			for (int prime : primes) {
				if (i * prime >= n) {
					break;
				}
				sieve[i * prime] = true;
				if (i % prime == 0) {
					break;
				}
			}
		}
		return primes.size();
	}
};