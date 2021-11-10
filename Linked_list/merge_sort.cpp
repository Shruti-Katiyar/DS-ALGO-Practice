//Merge-sort
class Solution {
public:
    ListNode* mid(ListNode* head){
        if(head == NULL or head->next == NULL){
            return head;
        }
        
        ListNode *slow = head;
        ListNode*fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
     ListNode* merge(ListNode* a, ListNode* b){
        if(a == NULL) return b;
        if(b == NULL) return a;
        
        ListNode* newhead;
        if(a->val < b->val){
            newhead= a;
            ListNode*c = merge(a->next, b);
            newhead->next=c;
        }
        else{
            newhead = b;
            ListNode*c = merge(a, b->next);
            newhead->next=c;
        }
        
        return newhead;
    }
    
    ListNode* sortList(ListNode* head) {
        //base case
         if(head==NULL or head->next==NULL)return head;
        
        //rec
        //1.divide
        ListNode*m=mid(head);
        ListNode*a=head;
        ListNode*b=m->next;
        m->next=NULL;
        
        //2.sort
        a=sortList(a);
        b=sortList(b);
        
        //3.merge
        ListNode* newhead=merge(a,b);
        return newhead;
        
    }
};
