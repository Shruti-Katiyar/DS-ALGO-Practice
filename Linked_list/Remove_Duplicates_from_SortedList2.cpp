//Remove Duplicates from Sorted List II
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
         ListNode*dummy=new ListNode(-1);
         dummy->next=head;
         ListNode*prev=dummy;
        
        while(head!=NULL){
            if(head->next!=NULL and head->val==head->next->val){
                //skip the nodes whose values are same
                while(head->next!=NULL and head->val==head->next->val){
                head=head->next;
            }
            prev->next=head->next;
        }
             
        else{
                prev=prev->next;
           } 
            
            head=head->next;
        
        }
        return dummy->next;
          
              
    }
};
