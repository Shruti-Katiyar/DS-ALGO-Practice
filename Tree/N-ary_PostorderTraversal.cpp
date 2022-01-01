//N-ary Tree Postorder Traversal
class Solution {
public:
    //postorder : left,right,root
    void traverse(Node*root,vector<int> &ans){
        if(!root)return ;
        //push child
        for(auto x:root->children){ //iterating in  vector 
            traverse(x,ans);
        }
        
        ans.push_back(root->val); //then insert root
    }
    vector<int> postorder(Node* root) {
        vector<int>ans;
        traverse(root,ans);
        return ans;
    }
};
