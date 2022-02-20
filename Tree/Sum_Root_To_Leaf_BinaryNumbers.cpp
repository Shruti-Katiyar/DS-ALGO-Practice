//Sum of Root To Leaf Binary Numbers
class Solution {
public:
      int sol=0;
    int sumRootToLeaf(TreeNode* root,int num=0) {
        if(!root)return 0;
        num *= 2;
        num+=root->val;
        if(!root->left&&!root->right)sol+=num;
        sumRootToLeaf(root->left,num);
        sumRootToLeaf(root->right,num);
        return sol;
    }
        
    
};
