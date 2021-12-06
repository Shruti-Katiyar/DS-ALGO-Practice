//Binary Tree Inorder Traversal

//Recursive
//TC :o(N)       SC: o(N)
class Solution {
public:
    void recurssive(TreeNode* root,vector<int> &ans){
        if(root==NULL)return;
        
        recurssive(root->left,ans);
        ans.push_back(root->val);
        recurssive(root->right,ans);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        recurssive(root,ans);
        return ans;
    }
};

//Iterative
//TC :o(N)       SC: o(N)
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st; 
        TreeNode* node = root;
        vector<int> inorder; 
        while(true) {
            if(node != NULL) {
                st.push(node); 
                node = node->left; 
            }
            else {
    
                if(st.empty() == true) break; 
                node = st.top(); 
                st.pop(); 
                inorder.push_back(node->val); 
                node = node->right; 
            }  
        }
        return inorder; 
    }
};
