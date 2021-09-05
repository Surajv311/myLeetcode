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
    
    bool fun(TreeNode* p, TreeNode* q){
        
        //if(p->val!=q->val) return false;
// if(p->val==q->val) return true;
         if(p==0 or q==0 ) return (p==q); // would check for true or false via the p==q condition... 
        
         bool a = fun( p->left,  q->left);
        bool b = fun( p->right,  q->right);

        return (p->val==q->val) and a and b;         
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
         bool x = fun(p, q);
        
        return x;
    }
};