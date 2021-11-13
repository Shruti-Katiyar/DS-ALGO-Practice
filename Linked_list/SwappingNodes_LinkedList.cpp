// Swapping Nodes in a Linked List
class Solution {
public:
    //finding lenght of linked list
    int lenght(ListNode* head){
        int ans=0;
        while(head){
            ans++;
            head=head->next;
        }
        return ans;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int start=k;
        int end=lenght(head)-k+1; //lenght(head)it will give lenght of list
        ListNode*startnode;
        ListNode*endnode;
        
        ListNode*cur=head;
        int idx=1;
        while(cur){
            if(start==idx)
                startnode=cur;
            if(end==idx)
                endnode=cur;
            
            cur=cur->next;
            idx++;
        }
        swap(startnode->val,endnode->val);
        return head;
        
    }
};
