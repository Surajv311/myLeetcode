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
    
    TreeNode * prev = 0; 
    void flatten(TreeNode* root) {
        
        if(root==0) return;
        
        flatten(root->right);
        flatten(root->left);
        
        root->right = prev; 
        root->left = 0; 
        prev = root; 
        
    }
};