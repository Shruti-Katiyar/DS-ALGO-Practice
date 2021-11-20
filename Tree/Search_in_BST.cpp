//Search in a Binary Search Tree
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        //base
        if(!root){
            return root;
        }
        
        //rec
        if(root->val==val){
            return root;
        }
        if(val<root->val){
           return searchBST(root->left,val);
        }
        if(val>root->val){
           return searchBST(root->right,val);
        }
        return NULL;
        
        
    }
};
