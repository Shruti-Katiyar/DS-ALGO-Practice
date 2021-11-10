// Insertion Sort List
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
         ListNode*dummy=new  ListNode(-1);
         ListNode*curr=head;
        
        while(curr!=NULL){
             ListNode*temp=curr->next;
             ListNode*prev=dummy;
             ListNode*nxt=dummy->next;
            
            while(nxt!=NULL){
                if(nxt->val > curr->val)
                    break;
                prev=nxt;
                nxt=nxt->next;
            }
            curr->next=nxt;
            prev->next=curr;
            curr=temp;
            
            
        }
        return dummy->next;
        
    }
};
