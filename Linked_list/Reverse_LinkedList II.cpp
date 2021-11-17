Reverse Linked List II
class Solution {
public:
     ListNode* reverse( ListNode* head){
          ListNode*prev=NULL;
          ListNode*temp=NULL;
          ListNode*cur=head;
         while(cur!=NULL){
             temp=cur->next;
             cur->next=prev;
             prev=cur;
             cur=temp;
         }
         return prev;
     }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         ListNode*cur=head;
         ListNode*prev=NULL;
        
         int count=1;
        while(count!=left){
            prev=cur;
            cur=cur->next;
            count++;
        }
        
         ListNode*start=cur;
        while(count!=right){
            cur=cur->next;
            count++;
        }
        
         ListNode*rest=cur->next;
        cur->next=NULL;
        
         ListNode*newhead=reverse(start);
        if(prev!=NULL){
            prev->next=newhead;
        }
        cur=newhead;
        while(cur->next!=NULL){
            cur=cur->next;
        }
        cur->next=rest;
        if(left==1){
            return newhead;
        }
        else{
            return head;
        }
        
    }
};
//tc=0(n)
