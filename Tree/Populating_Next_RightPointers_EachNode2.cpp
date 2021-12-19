//117. Populating Next Right Pointers in Each Node II
//Connect Nodes at Same Level (gfg)
class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)return NULL;
        
        Node* cur=root;
        while(cur!=NULL){//at every level always create a new dummy node 
            Node*dummy=new Node(0);
            Node*temp=dummy;
            
            while(cur!=NULL){//it take care of 1 level
                if(cur->left!=NULL){//that means left exist
                    temp->next=cur->left;
                    temp=temp->next;
                    
                }
                if(cur->right!=NULL){
                    temp->next=cur->right;
                    temp=temp->next;
                }
                //when we rech node when there is no nxt value that means update cur 
                
                  cur=cur->next; //when cur==null
            }
             cur=dummy->next; //move cur to next level
            
                      
        }
        return root;
    }
};
//TC:O(N) SC:O(1)
