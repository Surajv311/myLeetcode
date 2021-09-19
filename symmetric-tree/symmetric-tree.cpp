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
    
    bool fun(TreeNode* a, TreeNode* b){
    
        if(a==0 and b==0) return true;
        
        else if(a==0 or b==0) return false;
        
        else if(a->val!=b->val) return false; 
        
        return fun(a->left, b->right) and fun(a->right, b->left); 
        
    }
    
    bool isSymmetric(TreeNode* root) {
        
        if(root==0) return false; 
        
        return fun(root->left, root->right);
    }
};