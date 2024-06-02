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
    ListNode* reverseList(ListNode* head) {
        // practice
        
        ListNode* prev = 0; 
        ListNode* temp = head; 
    
        while(temp){
            head = temp->next; 
            temp->next = prev; 
            prev = temp; 
            temp = head; 
        }
        
        return prev; 
        
        
        
        
        
        
        
//         ListNode* prev = 0; 
//         ListNode* nex = head; 
//         ListNode* temp = head; 
        
//         while(nex){
            
//             nex = nex->next; 
//             temp->next = prev; 
//             prev = temp; 
//             temp = nex; 
            
//         }
        
//         return prev; 
    }
};