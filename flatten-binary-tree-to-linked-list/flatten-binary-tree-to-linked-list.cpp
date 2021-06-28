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
    
    TreeNode * prev = 0; 
    void flatten(TreeNode* root) {
        
        if(root==0) return;
        
//         flatten(root->right);
//         flatten(root->left);
        
//         // its like reverse postorder.....
//         root->right = prev; 
//         root->left = 0; 
//         prev = root; 
        
        // ITERATIVE USING A STACK 
        
        
//         stack<TreeNode*> st;
        
//         st.push(root);
//         while(!st.empty()){
            
//             TreeNode* node = st.top(); st.pop(); 
            
//             if(node->right) st.push(node->right);
//     // right child pushed first so that we get left child on top to pop...
//             if(node->left) st.push(node->left);
            
//             if(!st.empty()) node->right = st.top(); 
            
//             node->left = 0; 
            
//         }
        
        // morris traversal...
        
         TreeNode* curr = root;
    while (curr != NULL)
    {
        if (curr->left != NULL)
        {
          TreeNode* cleft = curr->left;
          while (cleft->right)
                cleft = cleft->right;
          cleft->right = curr->right;
          curr->right = curr->left;
          curr->left = NULL;
        }
        curr = curr->right;
    }
        
        
    }
};