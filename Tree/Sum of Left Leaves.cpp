//Sum of Left Leaves
https://leetcode.com/problems/sum-of-left-leaves/submissions/

//rec  (DFS)
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)return 0;
       
        //check root has left null nhi h and  root k left ka left null h  and
        //root k left ka right null  h  this means root ka left leaf node h 
        if(root->left !=NULL and root->left->left==NULL and root->left->right==NULL)
            return root->left->val+ sumOfLeftLeaves(root->right);
        else
            return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};
//TC:O(N)



