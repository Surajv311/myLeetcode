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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
             
        if (!root) return {};
        
        queue<TreeNode*> q;
        vector<vector<int>> ans;
            
        q.push(root);  
        int level = 0; 
        
        while (!q.empty()) {
            
            int sz = q.size();  
            vector<int> curr(sz); 
            
            // int i =0 ; 
            // while(sz--){
            for(int i = 0 ; i < sz ;i++){
                
                TreeNode* node = q.front();
                q.pop();
                
                if (level == 0) curr[i] = node->val; 
                 else curr[sz - i - 1] = node->val; 
                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
                
                // i++;
            }
            // i=0; 
            ans.push_back(curr);
            level = !level; 
        }
        return ans;
        
        
    }
    
    /*
    
    vector<int> findSpiral(Node *root)
{
    //Your code here
    
    // approach 1 
    if(root==NULL) return {}; 
    
    stack<int> st; queue<Node*> q; q.push(root); 
    bool flag = false;vector<int> ans; 
    while(!q.empty()){
        
        int sz = q.size(); 
        
        while(sz--){
            
            Node *curr = q.front(); 
            q.pop(); 
            
            if(flag == true) ans.push_back(curr->data);
            
            // if flag false 
            else st.push(curr->data);
            
            if(curr->left) q.push(curr->left); 
            if(curr->right) q.push(curr->right); 
            
            }
            
    if(flag==false){
        while(!st.empty())
            {
                ans.push_back(st.top()); 
                st.pop(); 
            }
     }
    
    flag = !flag; // toggle....
            
}
        
      return ans;

}
    
    */
};