//Add 1 to a number represented as linked list (gfg)
//https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
class Solution
{
    public:
    
    Node*reverse(Node* head){
        Node*next=NULL;
        Node*prev=NULL;
        Node*cur=head;
        while(cur!=NULL)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head=reverse(head);
        bool f=true;
        Node*cur=head;
        while(cur!=NULL and f==true){
            if(cur->next==NULL and cur->data==9){
                cur->data=1;
                Node*temp=new Node(0);
                temp->next=head;
                head=temp;
                cur=cur->next;
            }
            else if(cur->data==9){
                cur->data=0;
                cur=cur->next;
            }
            else{
                cur->data=cur->data+1;
                cur=cur->next;
                f=false;
            }
        }
        head=reverse(head);
        return head;
    }
};
