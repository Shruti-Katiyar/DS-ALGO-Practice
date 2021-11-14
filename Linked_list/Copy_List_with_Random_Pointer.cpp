//Copy List with Random Pointer
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node*iter=head;
         Node*front=head;
        
        //1.make copy of each node &then link them together
        while(iter!=NULL){
            front=iter->next;
            
             Node*copy=new  Node(iter->val);
             iter->next=copy;
             copy->next=front;
             iter=front;
        }
        
        //2.assign random pointer for the copy nodes
        iter=head;
        while(iter!=NULL){
            if(iter->random!=NULL){
                iter->next->random=iter->random->next;
                
            }
            iter=iter->next->next;
        }
        
        //3.restore the originall list and extract the copy list
        iter=head;
         Node*head2=new Node(0);
         Node*copy=head2;
        
        while(iter!=NULL){
            front=iter->next->next;
            
            //extract the copy
            copy->next=iter->next;
            
            //restore the original list
            iter->next=front;
            copy=copy->next;
            iter=front;
        }
        return head2->next;
    }
};
            
            
            
        
        
        
        

