// Author : Pooja Vishwakarma
// Date : 08/12/2023
// Problem : Construct String from Binary Tree
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/construct-string-from-binary-tree/description/

class Solution {
public:
    string tree2str(TreeNode* root) {
        if (root == nullptr) {
            return ""; // If root is null, return an empty string
        }

        string result = to_string(root->val); // Add the current node's value to the string

        if (root->left != nullptr || root->right != nullptr) {
            result += "(" + tree2str(root->left) + ")"; // Add left subtree
        }

        if (root->right != nullptr) {
            result += "(" + tree2str(root->right) + ")"; // Add right subtree
        }

        return result;
    }
};
