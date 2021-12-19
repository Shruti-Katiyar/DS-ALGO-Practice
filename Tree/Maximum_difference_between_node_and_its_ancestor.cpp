//Maximum difference between node and its ancestor(gfg)
int helper(Node* root,int &ans){
    if(root==NULL)return INT_MAX;//this means we are returning very large value that can not be the ans
    
    int left=helper(root->left,ans);
    int right=helper(root->right,ans);
    ans=max(ans,max(root->data-left,root->data-right));
    return min(left,min(root->data,right));
    //returning min b/w we have to maximize a-b 
    //to maximize it either increase a or decrease b
    //but a is fixed bw a is current node which we are traversing  
    //b is child 
}



int maxDiff(Node* root)
{
    // Your code here 
    int ans=INT_MIN;
    helper(root,ans);
    return ans;
}

