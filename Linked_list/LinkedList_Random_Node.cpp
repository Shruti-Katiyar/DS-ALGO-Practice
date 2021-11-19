//Linked List Random Node
class Solution {
public:
    vector<int>arr;
    Solution(ListNode* head) {
        while(head){
            arr.push_back(head->val);
            head=head->next;
        }
        
    }
    
    int getRandom() {
        int x=rand()%arr.size(); 
        //rand fun h stl ka
        return arr[x];
        
    }
};

//optimised

class Solution {
public:
    ListNode*root;
    Solution(ListNode* head) {
        root=head;
    }
    
    int getRandom() {
        ListNode*cur=root;
        ListNode* ans=NULL;
        int i=1;
        while(cur){
            if(rand()%i==0){
                ans=cur;
            }
            i++;
            cur=cur->next;
        }
        return ans->val;
        
        
    }
};
