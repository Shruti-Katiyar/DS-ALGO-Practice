//Minimum Depth of Binary Tree
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        
               
        if(root->left==NULL)//means we have only right subtree then return right tree
            return 1 + minDepth(root->right);

         if(root->right==NULL)//means we have only left subtree
            return 1 + minDepth(root->left);
       else
            //if both the child are present then we get the minimum depth
        return 1+ min(minDepth(root->left),minDepth(root->right));
        
    }
};
