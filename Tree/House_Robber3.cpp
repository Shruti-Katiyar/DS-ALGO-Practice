//House Robber III
class Solution {
public:
    vector<int> solve(TreeNode*root){
        //base
       if(!root)return {0,0};
        
        //rec
        vector<int> left=solve(root->left);
        vector<int> right=solve(root->right);
        
        int rob=root->val+left[1]+right[1];
        int notrob=max(left[0],left[1])+max(right[0],right[1]);
        
        return {rob,notrob};
        
    }
    int rob(TreeNode* root) {
        if(!root)
            return 0;
        vector<int>ans= solve(root);
        return max (ans[0],ans[1]);
        
            
        
        
    }
};
