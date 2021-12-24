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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
     
        if(preorder.size()==0) return 0;
        
        TreeNode* node = new TreeNode(preorder[0]);
        if(preorder.size()==1) return node; 

        vector<int> vleft; vector<int> vright; 
        
        for(int i = 0 ; i < preorder.size(); i++){
            if(preorder[0]>preorder[i]) vleft.push_back(preorder[i]);
            else if(preorder[0]<preorder[i]) vright.push_back(preorder[i]);
        }
        
        node->left = bstFromPreorder(vleft);
        node->right = bstFromPreorder(vright);
        
        return node;
        
        /*
        
        from solutions... 
        another good solution is:
        
        TreeNode* bstFromPreorder(vector<int>& preorder) {
        return helper(preorder.begin(), preorder.end());
        }
    
    TreeNode * helper(vector<int>::iterator begin, vector<int>::iterator end) {
        if (begin == end) {
            return nullptr;
        }
        
        auto node = new TreeNode(*begin);
        auto right = upper_bound(begin + 1, end, *begin);
        
        node->left = helper(begin + 1, right);
        node->right = helper(right, end);
        return node;
        
        */
        
    }
};