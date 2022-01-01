//N-ary Tree Preorder Traversal
class Solution {
public: 
    //Preorder : root,right,left
    
    //this question is similar Binary Tree Preorder Traversal. The only difference here is that we have an array of child nodes (children) instead of left & right pointers for each node.
    void traverse(Node* root, vector<int> &ans){
        if(root==NULL)return;
        ans.push_back(root->val);//first push root then child
        
            for(auto x:root->children){
                traverse(x,ans);
            }
    }
        
    
    vector<int> preorder(Node* root) {
        vector<int> ans;
        traverse(root,ans);
        return ans;
        
    }
};
