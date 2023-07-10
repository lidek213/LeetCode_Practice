/*
 * Problem: 121. Best Time to Buy and Sell Stock
 * URL: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * Difficulty: Easy
 * Tags: Array
 */

#include <vector>

using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int min = prices[0];
		int maxProfit = 0;
		for (int i = 0, size = prices.size(); i < size; i++) {
			if (prices[i] < min) {
				min = prices[i];
			}
			if (prices[i] - min > maxProfit) {
				maxProfit = prices[i] - min;
			}
		}
		return maxProfit;
	}
};