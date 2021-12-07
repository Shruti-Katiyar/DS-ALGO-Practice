//Binary Tree Preorder Traversal
//Recursive approach
//TC :o(N)       SC: o(N)
class Solution {
public:
    void recurssive(TreeNode* root,vector<int> &ans){
        if(root==NULL)return;
        
        ans.push_back(root->val);
        recurssive(root->left,ans);
        recurssive(root->right,ans);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        recurssive(root,ans);
        return ans;
    
    }
};

//Iterative approach
//TC :o(N)       SC: o(N)

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)return ans;
        
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            ans.push_back(root->val);
            if(root->right!=NULL){
                st.push(root->right);
                
            }
            if(root->left!=NULL){
                st.push(root->left);
            }
            
        }
        return ans;
    }
};

// Morris Traversal
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder; 
        
        TreeNode* cur = root; 
        while(cur != NULL) {
            if(cur->left == NULL) {
                preorder.push_back(cur->val); 
                cur = cur->right; 
            }
            else {
                TreeNode* prev = cur->left; 
                while(prev->right != NULL && prev->right != cur) {
                    prev = prev->right; 
                }
                
                if(prev->right == NULL) {
                    prev->right = cur;
                    preorder.push_back(cur->val); 
                    cur = cur->left; 
                }
                else {
                    prev->right = NULL;
                    cur = cur->right; 
                }
            }
        }
        return preorder; 
    }
};
