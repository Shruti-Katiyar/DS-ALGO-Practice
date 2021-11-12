//Merge In Between Linked Lists
class Solution {
public:
      ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp;
        ListNode* temp1;
        ListNode* curr=list1;
        int count=1;   //start cnt with 1
        while(curr!=NULL){
            if(count==a){//a=3
                temp=curr;
            }
            if(count==b){//b=4
               temp1=curr->next->next;// For the example 0 1 2 3 4 5  for b=4 it only comes upto the node 3. So Inorder to move to node 5 we did this step curr->next->next;
            }
            curr=curr->next; //To move to next node
            count++;
        }
        
        temp->next=list2; //for example 1: list1: 0 1 2 3 4 5 temp is 2 temp->next should attaches list2
        curr=list2;
        while(curr->next!=NULL){
            curr=curr->next;//To traverse till the end of list2
        }
        curr->next=temp1;// to attach the last node which is saved in temp1 i.e 5 in example1
        
        return list1;
    }
};
 
