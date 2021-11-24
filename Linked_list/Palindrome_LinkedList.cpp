//Palindrome Linked List

//naive
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        for(ListNode*cur=head;cur!=NULL;cur=cur->next)
        {
            s.push(cur->val);
        }
        for(ListNode*cur=head;cur!=NULL;cur=cur->next)
        {
            if(s.top()!=cur->val)
                return false;
            s.pop();
        }
        return true;
        
    }
};

//optimised

class Solution {
public:
    //reverse
     ListNode*reverselist( ListNode* head){
        ListNode* prev=NULL;
        ListNode* cur=NULL;
        while(head !=NULL){
            cur=head->next;
            head->next=prev;
            prev=head;
            head=cur;
        }
        return prev;
     }
     
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return true;
        }
         ListNode*fast=head;
         ListNode*slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverselist(slow->next);
        slow=slow->next;
        while(slow!=NULL){
            if(slow->val !=head->val)
                return false;
            slow=slow->next;
            head=head->next;
            
        }
        
        return true;
    
               
        
    }
};
