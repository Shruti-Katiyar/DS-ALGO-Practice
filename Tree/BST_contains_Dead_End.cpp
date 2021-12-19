//Check whether BST contains Dead End
bool solve(Node* root,int min,int max){
    if(!root)return false;
    if(min==max)return true;
    return solve(root->left,min,root->data-1)||solve(root->right,root->data+1,max);
}

bool isDeadEnd(Node *root)
{
    //Your code here
    return solve(root,1,INT_MAX);
}
//TC:O(N)
//SC:O(N)
