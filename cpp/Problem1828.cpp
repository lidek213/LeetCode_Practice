/*
 * Problem: 1828. Queries on Number of Points Inside a Circle
 * URL: https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/
 * Difficulty: Medium
 * Tags: Math
 */

#include <vector>

using namespace std;

class Solution {
public:
	vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
		vector<int> answers(queries.size(), 0);
		int i = 0;
		int dist;
		for (vector<int> &q : queries) {
			for (vector<int> &p : points) {
				dist = (p[0] - q[0]) * (p[0] - q[0]) + (p[1] - q[1]) * (p[1] - q[1]);
				answers[i] += dist <= q[2] * q[2] ? 1 : 0;
			}
			i++;
		}
		return answers;
	}
};