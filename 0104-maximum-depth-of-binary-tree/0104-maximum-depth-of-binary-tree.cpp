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
    int maxDepth(TreeNode* root) {
        // practice
        //Input: root = [3,9,20,null,null,15,7]
        //Output: 3
        
        if(root==0) return 0; 
        
       int lmax = 1 + maxDepth(root->left);
       int rmax = 1 + maxDepth(root->right);
        
        return max(lmax, rmax);
        
        
        
        
        
        
        
//         if(root==0) return 0;
        
//         // if(root->left) 
//             int l = maxDepth(root->left);
//         // if(root->right) 
//             int h = maxDepth(root->right);
        
        
        
//         return max(l,h)+1;          
        
    }
};