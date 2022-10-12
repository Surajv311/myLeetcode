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
    
    
    
    void fun(TreeNode* root, int target, vector<int> temp, vector<vector<int>> &ans){
        
        if(root==0) return; 
        temp.push_back(root->val);
        
        if(root->left==0 and root->right==0 and target==root->val)
        ans.push_back(temp);
        
        fun(root->left, target-root->val, temp, ans);
        fun(root->right, target-root->val, temp, ans);
        
        temp.pop_back();
        
        return; 
    }
    
    
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> temp; 
        vector<vector<int>> ans; 
        fun(root, targetSum, temp, ans);
        
        return ans; 
    }
};