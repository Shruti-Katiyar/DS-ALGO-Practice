//Minimum element in BST (gfg)
int minValue(Node* root) {
    // Code here
    if(root==NULL)return 0;
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
