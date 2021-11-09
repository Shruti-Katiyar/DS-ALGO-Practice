//Swap Nodes in Pairs
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode*dummy=new ListNode(-1);
        ListNode*curr=dummy;
        dummy->next=head;
        
        while(curr->next!=NULL and curr->next->next!=NULL){
          ListNode*first =curr->next;
          ListNode*second=curr->next->next;
            curr->next=second;
            first->next=second->next;
            second->next=first;
            curr=curr->next->next;
        }        
    
        return dummy->next;
    
    } 
    
};
