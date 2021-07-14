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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
// unoptimised : traversing whole ll and then subtracting the total length - given (n) ... and then againg traversing to change the links...~o(2n)
        
// optimised : take two pointers: fast and slow.. slow should be at 0 and move fast to given 'n' places ahead of slow...now move both fast and slow pointers one by one, with this we are iterating only once and once our slow reaches the 'n' position (which is from back...) then we interchange the links of the slow pointer... and delete it... to avoid memory leak...~o(n)
        
        ListNode * node = new ListNode();
        node -> next = head;
        ListNode* fast = node;
        ListNode* slow = node;     

        for(int i = 1; i <= n; i++)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return node->next;   
        
    }
};