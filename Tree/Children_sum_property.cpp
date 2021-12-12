//Children sum property
void reorder(treenode<int>*root){
    if(root==NULL)return;
    
    int child=0;
    if(root->left){
        child+=root->left->data;
    }
    if(root->right){
        child+=root->right->data;
    }
    if(child>=root->data)
        root->daat=child;
    else{
        if(root->left)
            root->left->data=root->data;
        else if(root->right)
            root->right->data=root->data;
    }
    reorder(root->left);
    reorder(root->right);
    
    int total=0;
    if(root->left)
        total+=root->left->data;
    if(root->right)
        total+=root->right->data;
    
    if(root->left || root->right)root->data=total;
  }
   void changetree(treenode<int>*root){
       reorder(root);
   }    
//TC:0(N)  SC:O(N)
