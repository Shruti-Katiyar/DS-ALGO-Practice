//Symmetric Tree
class Solution {
public:
    bool tree(TreeNode* root1,TreeNode* root2){
        if(!root1)return !root2;
        if(!root2)return !root1;
        return (root1->val==root2->val)and tree(root1->left,root2->right)and tree(root1->right,root2->left);
            
    }
        
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return tree(root->left,root->right);
    }
};
