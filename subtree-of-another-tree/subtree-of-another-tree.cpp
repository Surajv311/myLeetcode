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
        if (check(s,t)) return true;
        
        return isSubtree(s->left,t) or isSubtree(s->right,t);
        
    }
    bool check(TreeNode *s, TreeNode *t)
    {
        if (s==0 and t==0) return true; // both 0... hence true... 
        if (s==0 or t==0) return false;
        if (s->val != t->val) return false;
        
        return check(s->left, t->left) and check(s->right, t->right);
        
    }
};