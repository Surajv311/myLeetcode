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
    TreeNode* invertTree(TreeNode* root) {
        
        
        // practice
        
        if(root){
            invertTree(root->left);
            invertTree(root->right);
            swap(root->left, root->right);
        }
        return root; 
        
        
        /*
//          recursive way
        
        if(root){
            invertTree(root->left);
            invertTree(root->right);
//             once it reaches...
            swap(root->left,root->right);
        }
        
        return root; 
        
        */
        
//         iterative
        
//         stack<TreeNode*> st; 
//         st.push(root);
        
//         while(!st.empty()){
            
//             TreeNode*x = st.top(); 
//             st.pop(); 
            
//             if(x){
//                 st.push(x->left);
//                 st.push(x->right);
//                 swap(x->left,x->right);
//             }
            
//         }
        
//         return root;         
        
    }
};