//Binary Tree Pruning
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(!root)return NULL;
        root->left=pruneTree(root->left);
        root->right=pruneTree(root->right);
        
        if(root->left or root->right)
            return root;
        if(root->val==0)return NULL;
        return root;
    }
};
