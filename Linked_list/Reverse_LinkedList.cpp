//Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       //base
        if( head==NULL || head->next==NULL){
            return head;
        }
        //rec
         ListNode*head2=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return head2;
     
        
    }
};
