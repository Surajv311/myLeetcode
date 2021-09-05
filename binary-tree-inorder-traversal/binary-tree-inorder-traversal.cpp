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
    
    void funR(TreeNode* root, vector<int> &ans){
        
        if(root==0) return;
        
        funR(root->left,ans);
ans.push_back(root->val);
    funR(root->right,ans);
        
        return;
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans; 
        
        
//         via recursion 
        
//        funR(root,ans);
        
//         via iterative 
        
        stack<TreeNode*> st; 
        TreeNode*x;
        while(root or !st.empty())
        {
            if(root)
            {
                st.push(root);
                root = root->left;
            }
            else{
                
                root = st.top(); st.pop();
                
                ans.push_back(root->val);          
                root = root->right;
            }
            
            
        }
        
        return ans;
    }
};
