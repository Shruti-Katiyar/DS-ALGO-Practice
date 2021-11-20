//Merge k Sorted Lists
class Solution {
public:
     ListNode* mergetwolists(ListNode* a, ListNode* b){
        if(a == NULL) return b;
        if(b == NULL) return a;
        
        ListNode* newhead;
        if(a->val < b->val){
            newhead= a;
            ListNode*c = mergetwolists(a->next, b);
            newhead->next=c;
        }
        else{
            newhead = b;
            ListNode*c = mergetwolists(a, b->next);
            newhead->next=c;
        }
        
        return newhead;
     }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0)return NULL;
        ListNode *head=lists[0];
        for(int i=1;i<n;i++){
            head=mergetwolists(head,lists[i]);
        }
        return head;
    }
    
};
