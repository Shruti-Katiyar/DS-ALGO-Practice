// Same Tree
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL and q==NULL)return true; //empty tree are same
        
        if(p==NULL || q==NULL)return false;//agar dono m koi ek tree null h to dono same nh hogha
        
        if(p->val!=q->val)return false;
        
      //check left and right subtree
        int left=isSameTree(p->left,q->left);
        int right=isSameTree(p->right,q->right);
        return left and right;
        
        
    }
};
