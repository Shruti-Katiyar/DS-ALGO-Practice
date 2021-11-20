// Linked List Cycle II
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast and fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){ //if cycle is presentthen slow again head say start                              
			                // hogha
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }//where fast and slow meet return that idx
                return slow;
                
            }
        }
        //agar cycle nh h return null
        return NULL;
        
    }
};
