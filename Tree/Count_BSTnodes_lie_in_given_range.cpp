//Count BST nodes that lie in a given range (gfg)

int getCount(Node *root, int l, int h)
{
  // your code goes here  
  if(!root)return 0;
  
  if(root->data>h)
  return getCount(root->left,l,h);
  if(root->data <l)
  return getCount(root->right,l,h);
    
    if(root->data>=l and root->data<=h)//root=5 
    //5>=2 and 5<=8 yes 
      return 1 + getCount(root->left,l,h)+getCount(root->right,l,h);
    
    
}
