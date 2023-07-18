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
		vector<TreeNode*> nextLevel = {root};
		vector<TreeNode*> currentLevel;
		while (nextLevel.size() != 0) {
			currentLevel = nextLevel;
			nextLevel.clear();
			for (TreeNode* node : currentLevel) {
				if (node->left != nullptr) {
					nextLevel.push_back(node->left);
				}
				if (node->right != nullptr) {
					nextLevel.push_back(node->right);
				}
			}
		}
		int sum = 0;
		for (TreeNode* node : currentLevel) {
			sum += node->val;
		}
		return sum;
	}
};