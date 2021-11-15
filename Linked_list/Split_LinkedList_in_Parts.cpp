//Split Linked List in Parts
class Solution {
public:
    int getlength(ListNode*head){
        int len=0;
        while(head){
            head=head->next;
            len++;
        }
        return len;
    }
    
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int listlength=getlength(head); // calculate lenght of  list l=10
        int partsize=listlength/k; // 3
        int extranodes=listlength%k; // 1
        
        vector<ListNode*> ans;
        ListNode*cur=head;
        ListNode*prev=NULL;
        while(head){
            int eachpartsize=partsize; // 3
            ans.push_back(cur); //cur is starting of every part of list
            
            while(eachpartsize>0){
                prev=cur;
                cur=cur->next;
                eachpartsize--;
            } 
            
            if(extranodes!=0 and cur!=NULL){ //extranodes include one at a time in list
                extranodes--;
                prev=cur;
                cur=cur->next;
            }
            
            if(prev!=NULL){ //end of each part of list  should point to null
                head=cur;
                prev->next=NULL;
            }
        } 
        while(ans.size()!=k) //this cond  is for when lenght of list is less than
            // i/p : [1 2 3] k=5
            //  o/p : [[1][2][3][][]]
            ans.push_back(NULL);
        
        return ans;
        
        
    }
};
