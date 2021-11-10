//  Partition List
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode*small=new ListNode(0);
        ListNode*higher=new ListNode(0);
        
        ListNode*smallkahead=small;
        ListNode*higherkahead=higher;
        
       while(head!=NULL){
           if(head->val<x){ //when values are smaller than x
                //make smaller list
                smallkahead->next=head;
                smallkahead=smallkahead->next;
                
               }
            else
               {//when values are greater or equal to x
                //make higher list
                higherkahead->next=head;
                higherkahead=higherkahead->next;
              }
      head=head->next;
    }
        //combine both the list
        higherkahead->next=NULL;
        smallkahead->next= higher->next;
        
        return small->next;
        
        
    }
};
//TC =O(N)
//SC=O(1)

