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

    int fun(TreeNode*root, bool &flag){
        
        if(root==0) return 0; 
        
        if(flag==false) return 0; // added 1st condition 
        
//         finding depth...
        
        int ld = fun(root->left,flag);
        int rd = fun(root->right,flag);
        
        if(abs(ld-rd)>1) flag = false; // added 2nd condition 
        
        return 1 + max(ld,rd); // at base case it would return 0... 
        
    }
    
    bool isBalanced(TreeNode* root) {
        
        bool flag = true; 
        
//         just find depth of tree & add just two conditions... 
        
       fun(root, flag); 
        
        return flag; 
    }
};
