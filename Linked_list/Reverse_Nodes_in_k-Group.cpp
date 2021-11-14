// Reverse Nodes in k-Group
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1)return head;
           
        ListNode* dummy=new ListNode(0,head);
        ListNode*cur=dummy;
        ListNode*temp=dummy;
        ListNode*prev=dummy;
        int count=0;
        
        //calculat lenght of list
        while(cur->next!=NULL){
            cur=cur->next;
            count++;
        }
        
        while(count>=k){
            cur=prev->next;
            temp=cur->next;
            for(int i=1;i<k;i++){
                cur->next=temp->next;
                temp->next=prev->next;
                prev->next=temp;
                temp=cur->next;
            }
            prev=cur;
            count-=k;
        }
        return dummy->next;
        
        
    }
};
