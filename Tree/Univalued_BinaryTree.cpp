//Univalued Binary Tree
class Solution {
public:
    bool helper(TreeNode* root, int val){
        if(!root)return true;
        if(root->val!=val) return false;
        return helper(root->left,val)and helper(root->right,val);
    }
    
    bool isUnivalTree(TreeNode* root) {
   return helper(root,root->val);
        
        
    }
};
