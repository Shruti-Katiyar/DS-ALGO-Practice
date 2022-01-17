//Distribute Coins in Binary Tree
class Solution {
public:
    int moves=0;
    int coins(TreeNode*root){
        if(!root)return 0;
        
        int left=coins(root->left);
        int right=coins(root->right);
        moves+=abs(left)+abs(right);
        return root->val+left+right-1;
        
    }
    int distributeCoins(TreeNode* root) {
        coins(root);
        return moves;
    }
};
