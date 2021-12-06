//Invert Binary Tree or Mirror
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //base case
        if(!root){
            return 0;
        }
        //rec
        swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
        
        
    }
};
