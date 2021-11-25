//Insert into a Binary Search Tree
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        //base
        if(root==NULL){
           TreeNode* node=new TreeNode(val);
            return node;
        }
        //rec
        if(val<=root->val){
            root->left=insertIntoBST(root->left,val);
            
        }
        else{
            root->right=insertIntoBST(root->right,val);
        }
        return root;
    }
};
