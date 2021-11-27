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
    
    
        ListNode* mid(ListNode*h){
        
        // base case
        if(h==0 or h->next==0) return h; 
        
        ListNode*slow = h; 
        ListNode*fast = h; 
        
        while(fast->next and fast->next->next){
            slow=slow->next; 
            fast=fast->next->next;
        }
        // to get the mid of the entire linkedlist...
        // we have node->next & node->next->next 
        // cases since total ll size could be even/odd..
        
        return slow; 
        
    }
    
    
    ListNode*merge(ListNode*l1, ListNode*l2){
        //  to merge the nodes 
        
        if(l1==0 or l2==0) return l1!=0?l1:l2; 
        
        ListNode*temp = new ListNode(-1);
        ListNode* t = temp; 
        
        while(l1 and l2){
            
            if(l1->val>l2->val){
                temp->next = l2;
                l2 = l2->next; 
                
            }
            
            else{
                temp->next = l1; 
                l1 = l1->next;
            }
            
            temp = temp->next; 
            
        }
        
        if(l1) temp->next = l1; 
        else temp->next = l2; 
        
        return t->next; 
        
    }
    
    
    
    ListNode* sortList(ListNode* head) {
        
        
           if(head==0 or head->next==0) return head; 
        
        //  first find the mid element to divide...
        
        ListNode*m = mid(head);
        
        ListNode* x = m->next;
        m->next = 0; 
        
        ListNode*a = sortList(head);
        ListNode*b = sortList(x);
        
        return merge(a,b);
        
        
    }
};