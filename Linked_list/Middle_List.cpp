// Middle of the Linked List
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         if(head == NULL or head->next == NULL){
            return head;
        }
        
        ListNode *slow = head;
        ListNode*fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    
        
    }
};
