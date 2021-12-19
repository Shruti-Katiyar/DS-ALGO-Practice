// Maximum Width of Binary Tree
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int ans=0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        
        while(!q.empty()){
            int n=q.size();
            int min=q.front().second;
            
            int first,last;
            for(int i=0;i<n;i++){
                int cur_idx=q.front().second-min;
                TreeNode*node=q.front().first;
                q.pop();
                
                if(i==0){
                    first=cur_idx;
                }
                if(i==n-1){
                    last=cur_idx;
                }
                if(node->left){
                    q.push({node->left,cur_idx*2+1});
                }
                if(node->right){
                    q.push({node->right,cur_idx*2+2});
                }
                ans=max(ans,last-first+1);
            }
        }
       return ans; 
    }
};
