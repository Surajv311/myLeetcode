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
     bool isSubtree(TreeNode* s, TreeNode* t) {
        
        if(s==0) return false;
        if (sym(s,t)) return true;
        
        return isSubtree(s->left,t) || isSubtree(s->right,t);
        
    }
    bool sym(TreeNode *s, TreeNode *t)
    {
        if (s==0 and t==0) return true;
        if (s==0 or t==0) return false;
        if (s->val != t->val) return false;
        
        return sym(s->left, t->left) and sym(s->right, t->right);
        
    }
};