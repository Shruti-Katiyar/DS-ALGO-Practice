//Binary Tree Postorder Traversal
//Recursive
//TC :o(N)       SC: o(N)
class Solution {
public:
    void recurssive(TreeNode* root,vector<int> &ans){
        if(root==NULL)return;
        
        recurssive(root->left,ans);
        recurssive(root->right,ans);
        ans.push_back(root->val);
    }
   
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        recurssive(root,ans);
        return ans;
    
    }
    
};

//Iterative approach using two stack
//TC :o(N)       SC: o(2N)

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        stack<TreeNode*> st1,st2;
        st1.push(root);
        while(!st1.empty()){
            root=st1.top();
            st1.pop();
            st2.push(root);
            if(root->left!=NULL){
                st1.push(root->left);
            }
            if(root->right!=NULL){
                st1.push(root->right);
            }
            
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            st2.pop();
        }
        
       return ans; 
        
    }
};


//using one stack 
//TC :o(N)       SC: o(N)
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)return ans;
        stack<TreeNode*>st;
        TreeNode*cur=root;
        while(cur!=NULL || !st.empty()){
            if(cur!=NULL){
                st.push(cur);
                cur=cur->left;
            }
            else{
                TreeNode*temp=st.top()->right;
                if(temp==NULL){
                    temp=st.top();
                    st.pop();
                    ans.push_back(temp->val);
                    while(!st.empty()and temp==st.top()->right){
                        temp=st.top();
                        st.pop();
                        ans.push_back(temp->val);
                       }
                  }
                
                  else{
                        cur=temp;
                    }
                }
            }
        
        return ans;
        
    }
};
