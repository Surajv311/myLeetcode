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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<TreeNode*> q; 
        
        vector<vector<int>> ans; 
        
        q.push(root);
        
        if(root==NULL) return {};
        
        while(!q.empty()){
            
            int n = q.size(); 
                    
            vector<int> temp; 
            
            while(n--){
            TreeNode * x = q.front(); q.pop(); //pop
                temp.push_back(x->val);
                if(x->left) q.push(x->left);    
                if(x->right) q.push(x->right);             
            
            }
        
        ans.push_back(temp);
        temp.clear(); ////
        }
      
        return ans ;
    }
};