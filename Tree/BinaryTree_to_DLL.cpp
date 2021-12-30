//Binary Tree to DLL 
class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    void helper(Node*root,Node* &head,Node* &prev,int & cnt){
        if(root==NULL)return;
        //inorder traversal
        helper(root->left,head,prev,cnt);
        if(cnt==0){
            //inserting first node
            cnt=1;
            head=root;
            prev=root;
        }
        else {
            prev->right=root;
            prev->right->left=prev;
           
            //prev=prev->right;
            prev=root;
        }
        helper(root->right,head,prev,cnt);
    }
    Node * bToDLL(Node *root)
    {
        // your code here
       Node* head=NULL;
       Node* prev=NULL;
       int cnt=0;//when cnt=0 means first node is inserting 
       helper(root,head,prev,cnt);
       return head;
        
    }
};

