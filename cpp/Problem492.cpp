/*
 * Problem: 492. Construct the Rectangle
 * URL: https://leetcode.com/problems/construct-the-rectangle/
 * Difficulty: Easy
 * Tags: Math
 */

#include <cmath>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> constructRectangle(int area) {
		vector<int> results(2, 0);
		for (int i = (int)sqrt(area); i >= 1; i--) {
			if (area % i == 0) {
				results[0] = area / i;
				results[1] = i;
				break;
			}
		}
		return results;
	}
};