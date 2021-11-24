//Reverse a Doubly Linked List     (GFG)
Node* reverseDLL(Node * head)
{
    //Your code here
    if(head==NULL || head->next==NULL)return head;
    Node*prev=NULL;
    Node*cur=head;
    while(cur!=NULL){
        prev=cur->prev;
        cur->prev=cur->next;
        cur->next=prev;
        cur=cur->prev;
    }
    return prev->prev;
}

