/*
 * Problem: 94. Binary Tree Inorder Traversal
 * URL: https://leetcode.com/problems/binary-tree-inorder-traversal/
 * Difficulty: Easy
 * Tags: Tree, DFS, Inorder Traversal
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
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		inorder(root, result);
		return result;
	}
private:
	void inorder(TreeNode* node, vector<int>& result) {
		if (node == nullptr) {
			return;
		}

		inorder(node->left, result);
		result.push_back(node->val);
		inorder(node->right, result);
	}
};