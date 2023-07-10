# Problem: 121. Best Time to Buy and Sell Stock
# URL: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
# Difficulty: Easy
# Tags: Array

from typing import List

class Solution:
  def maxProfit(self, prices: List[int]) -> int:
    min: int = prices[0]
    maxProfit: int = 0
    for i in range(0, len(prices)):
      if prices[i] < min:
        min = prices[i]
      if prices[i] - min > maxProfit:
        maxProfit = prices[i] - min
    return maxProfit