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
    
    int maxSum(TreeNode*root, int &res){
     if(root==0) return 0; 
    
    int lmax = maxSum(root->left,res);
    int rmax = maxSum(root->right,res);
    
    int nodeMax = max(max(lmax,rmax)+root->val , root->val);
    // for a node... we take max from left & right subtree : max(lmax,rmax)+root->data 
    //& add it... if both left/right subtree sum value is negative, 
    //then we just take our present curr node.. :root->data since we want max val...
    
    // now when we reach our final root node... 
    
    int rootMax = max(nodeMax,lmax+rmax+root->val);
    
    res = max(res,rootMax); 
    
    return nodeMax; // res passed by reference....z
    
} 
    
    int maxPathSum(TreeNode* root) {
        
        
          int res = INT_MIN; 
        
       maxSum(root,res);
        
        return res; 
        
    }
};