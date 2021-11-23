//Convert Binary Number in a Linked List to Integer
class Solution {
public:
    
    //101
    //1*2*2 + 0*2 + 1 = 5
    int getDecimalValue(ListNode* head) {
        int res=0;
        while(head!=NULL){
            res*=2;//res=res<<1
            res+=head->val;
            head=head->next;
            
           
        }
        return res;
        
    }
};
