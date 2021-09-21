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
    
    int fun(TreeNode*root, int &dia){
        
        if(root==0) return 0; 
        
        int ld = fun(root->left, dia);
        int rd = fun(root->right, dia);
        
        dia =  max(dia, ld+rd); 
        
        return 1+max(ld,rd);
        
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        int dia = 0; 
        fun(root,dia);
        
        return dia ;
    }
};