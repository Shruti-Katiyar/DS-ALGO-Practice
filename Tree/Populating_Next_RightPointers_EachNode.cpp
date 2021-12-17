// Populating Next Right Pointers in Each Node

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL or root->left==NULL or root->right==NULL)return root;
        
        root->left->next=root->right;
        if(root->next!=NULL){
            root->right->next=root->next->left;
        }
        connect(root->left);
        connect(root->right);
        return root;
        
    }
};
