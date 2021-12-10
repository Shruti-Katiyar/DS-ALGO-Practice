//Kth Smallest Element in a BST

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*>s;
        TreeNode* node=root;
        int cnt=0;
        while(true){
            if(node!=NULL){
                s.push(node);
                node=node->left;
            }
            else{
                if(s.empty()){
                    break;
                }
                node=s.top();
                s.pop();
                
                cnt++;
                if(cnt==k)
                    return node->val;
                node=node->right;
                
            }
            
        }
        return -1;
        
    }
};
