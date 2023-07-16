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
		TreeNode* head = root;
		TreeNode* prev = nullptr;
		while (head != nullptr) {
			if (head->left == nullptr) {
				result.push_back(head->val);
				head = head->right;
			} else {
				prev = head->left;
				while (prev->right != nullptr) {
					prev = prev->right;
				}
				prev->right = head;
				TreeNode* tmp = head;
				head = head->left;
				tmp->left = nullptr;
			}
		}
		return result;
	}
};