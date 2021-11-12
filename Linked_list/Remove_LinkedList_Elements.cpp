// Remove Linked List Elements
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*dummy=new  ListNode(0,head);
         ListNode*temp=head;
         ListNode* prev=dummy;
        while(temp!=NULL){
            if(temp->val!=val)
            {
                prev=temp;
                temp=temp->next;
                
            }
            else{
                prev->next=temp->next;
                temp=temp->next;
                
            }
            
        }
        return dummy->next;
    }
};
