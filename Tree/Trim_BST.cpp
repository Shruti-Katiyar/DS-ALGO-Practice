/*Remove BST keys outside given range (GFG)
    or
    Trim a Binary Search Tree (Leetcode)
*/
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root==NULL)return NULL;
        
        if(root->val < low){// if root is less than low range then return right part
        return trimBST(root->right,low,high);
        }
        
        if(root->val >high){
           return trimBST(root->left,low,high); 
        }
        
        // If the value is in range [low,high] it means this node will stay in the final tree 
        // so just set its left and right pointers with recursive calls
        
        if(root->val >=low and root->val <=high){
        root->left = trimBST(root->left, low, high);// root->left will be pointing to return value
         root->right= trimBST(root->right,low,high);//root->right will be pointing to return value
        }
         
        return root;
    }
    
};    
    
  
