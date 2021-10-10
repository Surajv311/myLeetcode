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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL) return head;
//      head->next == 0 condition would be troublesome during recursive calls...    
        
        ListNode* x=head->next;
        
        if(x and x->val==head->val){ // as long as both values remain same... 
            
         while(x and x->val==head->val) {
             ListNode* temp= x;
//               x keeps on moving ... 
             
             x=x->next; 
             temp->next = NULL; // detaching it ... making it point to null...
         }
            
            return deleteDuplicates(x);
        }
        
//         else when the value is not same... 
        else head->next = deleteDuplicates(head->next);
        
        return head;
        
    }
};