/*
 * Problem: 9. Palindrome Number
 * URL: https://leetcode.com/problems/palindrome-number/
 * Difficulty: Easy
 * Tags: Math
 */

class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0) {
      return false;
    }
    int tempNum = x;
    int palindromeNum = 0;
    while (tempNum > 0) {
      palindromeNum = palindromeNum * 10 + tempNum % 10;
      tempNum /= 10;
    }
    return x == palindromeNum;
  }
};