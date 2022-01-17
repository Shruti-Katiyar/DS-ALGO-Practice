//Median of BST (gfg)
void inorder(struct Node* root,vector<int>& ans){
    if(root==NULL)
        return;
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
float findMedian(struct Node *root)
{
      //Code here
     vector<int> ans;
     inorder(root,ans);
     if(ans.size()%2==0){
         return (float)
         (ans[ans.size()/2] + ans[ans.size()/2-1])/2;
     }
     else{
         return ans[ans.size()/2];
     }
}


