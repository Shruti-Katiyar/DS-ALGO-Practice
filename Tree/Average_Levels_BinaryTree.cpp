//Average of Levels in Binary Tree
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(!root)
            return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            double size = q.size();
            double avg = 0;
            for(int i = 0; i < size; i++){
              TreeNode*  temp = q.front();
                q.pop();
                avg += temp->val;
                
                if(temp->left != NULL)
                    q.push(temp->left);
                if(temp->right != NULL)
                    q.push(temp->right);
            }
            ans.push_back(avg/size);
        }
        return ans;
    }
};
