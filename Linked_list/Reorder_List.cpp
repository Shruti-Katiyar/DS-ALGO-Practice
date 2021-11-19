//Reorder List
class Solution {
public:
    void reorderList(ListNode* head) {
        stack<ListNode*>s;
        ListNode* cur=head;
        while(cur){
            s.push(cur);
            cur=cur->next;
        }
        cur=head;
        int n=s.size();
        if(n<=2)return;
        
        ListNode*nxt;
        for(int i=0;i<n/2;i++){
            nxt=cur->next;
            cur->next=s.top();
            s.pop();
            cur=cur->next;
            cur->next=nxt;
            cur=cur->next;
        }
        cur->next=NULL;
    }
};
// TC =O(N)     SC=O(N)

//optimised   TC=O(N)    SC=O(1)

class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next)return;
        
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*prev=NULL;
        ListNode*cur=slow;
        ListNode*temp;
        
        while(cur){
            temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        
        ListNode*n1=head;
        ListNode*n2=prev;
        while(n2->next){
            temp=n1->next;
            n1->next=n2;
            n1=temp;
            
            temp=n2->next;
            n2->next=n1;
            n2=temp;
        }
    }
};
