//Binary Search Tree to Greater Sum Tree

//recursisve 
class Solution {
public:
    int sum=0;
    TreeNode* bstToGst(TreeNode* root) {
       if(root==NULL)return NULL;
        
        bstToGst(root->right);
        
        sum+=root->val;
        root->val=sum;
        
        bstToGst(root->left);
         return root;
    }
};
//TC :O(N)  for reverse inorder traversal 
// SC:O(N) for  rec stack

//iterative
class Solution {
public:
    int sum=0;
    TreeNode* bstToGst(TreeNode* root) {
       if(root==NULL)return NULL;
                     
        stack<TreeNode*>s;
        TreeNode* temp=root;
        while(!s.empty() or temp!=NULL){
            while(temp!=NULL){
            s.push(temp);
            temp=temp->right;
         }
            temp=s.top();
            s.pop();
            sum+=temp->val;
            temp->val=sum;
            
            temp=temp->left;
        
            }
         return root;
        
    }
};
//TC:O(N)  
//SC:O(N)




