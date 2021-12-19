//Balance a Binary Search Tree
//Normal BST to Balanced BST (gfg)
class Solution {
public:
 void inorder(TreeNode* root,vector<TreeNode*>& ans){
    if(root==NULL)
        return;
    inorder(root->left,ans);
    ans.push_back(root);
    inorder(root->right,ans);
}

TreeNode* solve(vector<TreeNode*>& ans, int start, int end){
    
    if(start>end)
        return NULL;
     int mid=(start+end)/2;
    //int mid=start+(end-start)/2;
    TreeNode* root=ans[mid];
    root->left=solve( ans,start,mid-1);
    root->right=solve(ans,mid+1,end);
    return root;
}     
    

    TreeNode* balanceBST(TreeNode* root) {
    vector<TreeNode*> ans;
	inorder(root,ans);
        
	int n=ans.size();
	return solve(ans,0,n-1); //start=0,end=n-1;
    }
};
