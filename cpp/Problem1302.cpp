/*
 * Problem: 1302. Deepest Leaves Sum
 * URL: https://leetcode.com/problems/deepest-leaves-sum/
 * Difficulty: Medium
 * Tags: Tree, DFS
 */

#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	int deepestLeavesSum(TreeNode* root) {
		int maxDepth = 0;
		int result = 0;
		dfs(root, 0, maxDepth, result);
		return result;
	}

	void dfs(TreeNode* root, int depth, int& maxDepth, int& result) {
		if (root == nullptr) {
			return;
		}
		dfs(root->left, depth + 1, maxDepth, result);
		dfs(root->right, depth + 1, maxDepth, result);
		if (depth > maxDepth) {
			maxDepth = depth;
			result = root->val;
		} else if (depth == maxDepth) {
			result += root->val;
		}
	}
};