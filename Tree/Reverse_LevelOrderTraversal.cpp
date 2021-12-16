//Reverse Level Order Traversal 
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            
            int n=q.size();
            vector<int>level;
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                level.push_back(temp->val);
            }
            ans.push_back(level);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
