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
    
    void fun(TreeNode* root, vector<int> &ans)
    {
        if(root==0) return; 
        
        if(root->left and root->left->left==0 and root->left->right==0){
            ans.push_back(root->left->val); 
        }
        
        fun(root->left, ans);
        fun(root->right, ans);
        
        return; 
    }
        
    int sumOfLeftLeaves(TreeNode* root) {
        
        vector<int> ans; 
        
        fun(root, ans);
        
        int sum = 0; 
        for(auto i:ans){
            sum+=i;
        }
        // int sum = *accumulate(ans.begin(), ans.end(), 0);
        
        return sum; 
    }
};