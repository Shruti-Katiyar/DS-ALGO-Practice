//Flatten a Multilevel Doubly Linked List

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr=head;
        while(curr!=NULL){
            if(curr->child==NULL){
                curr=curr->next;
                continue;
            }
            else{
        
            Node*temp=curr->child;
            while(temp->next!=NULL) //we need last node
                temp=temp->next;
            
            temp->next=curr->next; //inserting 1st level of child
                
            if(curr->next!=NULL)//if cur.next is not null then
                curr->next->prev=temp; //change the prev pointer of current
            curr->next=curr->child; //update the curr.next and change the prev pointer of cur                                           child
            curr->child->prev=curr;
            curr->child=NULL;
        }
    }
    
        return head;
    }
};
//TC= O(N)   SC= O(1)
