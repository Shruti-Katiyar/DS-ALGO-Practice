//Odd Even Linked List
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL ||head->next==NULL){
            return head;
        }
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenhead=head->next;
        ListNode* cur=head->next->next;
        
        int count=1;
        while(cur){
            if(count %2==1){
                odd->next=cur;
                odd=odd->next;
            }
            else{
                even->next=cur;
                even=even->next;
            }
            count++;
            cur=cur->next;
        }
        odd->next=NULL;
        even->next=NULL;
        
        odd->next=evenhead;
        return head;
        
    }
};
