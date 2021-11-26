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
    
    
int fun(TreeNode*root, vector<int> &ans){
    
    if(root==0) return 0; 
    
    fun(root->left,ans);
    ans.push_back(root->val);
    fun(root->right,ans);
    
    return 0;
}

    
    int rangeSumBST(TreeNode* root, int low, int high) {
     
        
        vector<int> ans; 
  
  fun(root,ans);
  
int count = 0; 
for(auto i:ans){
    
    if(i>=low and i<=high) count+=i;
    
}

return count; 
        
    }
};