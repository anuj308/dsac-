// https://leetcode.com/problems/binary-tree-inorder-traversal/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inOrderFunc(TreeNode *root, vector<int>& ans){
        if(root == NULL) return;
        inOrderFunc(root->left,ans);
        ans.push_back(root->val);
        inOrderFunc(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        inOrderFunc(root,v);

        return v;
    }
};