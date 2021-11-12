//Remove Duplicates from Sorted List
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*temp=head;
        while(temp!=NULL and temp->next!=NULL){
            if(temp->val==temp->next->val){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
        
    }
};
