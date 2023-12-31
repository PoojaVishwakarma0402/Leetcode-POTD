// Author : Pooja Vishwakarma
// Date : 09/12/2023
// Problem : Binary Tree Inorder Traversal
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/binary-tree-inorder-traversal/description/



class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorderHelper(root, result);
        return result;
    }
    
    void inorderHelper(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {
            return;
        }
        
        // Traverse left subtree
        inorderHelper(node->left, result);
        
        // Visit current node
        result.push_back(node->val);
        
        // Traverse right subtree
        inorderHelper(node->right, result);
    }
};
