/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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

    TreeNode* fun(ListNode* head, ListNode* end){
//     head would be our head, & end would be NULL., (easy to understand once we jump into the recursive code...)
    
//     base case: 

    if(head==end) return 0; // means head==0...
 
//     now using floyd algo to reach mid and the end of list
    
    ListNode *mid = head; ListNode *flag = head; 
    // mid = temp = head; // both same values
    
//     now using floyd algo: 
    
    while(flag!=end and flag->next!=end){ // just visualize what if only 3 nodes... hence we have 2 conditions in while()...
        
        mid = mid->next; 
        flag = flag->next->next; // 2x speed...
        
    }
    
//     now recursion
//     note that the linked list is sorted....
    
    TreeNode * root = new TreeNode(mid->val);
    
    root->left = fun(head, mid);// start to mid
    root->right = fun(mid->next, end); // mid+1 to end...
//     note the call si recursive... hence again it would be further divided...
    
    return root; 
    
}
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        return fun(head,0);
        
    }

};