//Delete Node in a Linked List
class Solution {
public:
    void deleteNode(ListNode* node) {
      
     ListNode* prev;
    if (node == NULL)
        return;
    else {
        while (node->next != NULL) {
            node->val = node->next->val;
            prev = node;
            node = node->next;
        }
        prev->next = NULL;
    }

   
    } 
 

};
