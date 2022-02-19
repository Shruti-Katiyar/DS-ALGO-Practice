//Path Sum III
class Solution {
public:
    int countpath(TreeNode* root ,int ts){
        if(!root)return NULL;
        int ans=0;
        if(root->val-ts==0){
            ans++;
        }
        ans+=countpath(root->left,ts-root->val);
        ans+=countpath(root->right,ts-root->val);
        return ans;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return 0;
        
        //include root & calculate all the path that have ts
        int ans=countpath(root,targetSum);
        //find all the path in left tree equal to ts
        ans+=pathSum(root->left,targetSum);
        //find all the path in right tree equal to ts
        ans+=pathSum(root->right,targetSum);
        return ans;
        
        
    }
};
//TC :O(N2)

//OPTIMISED

class Solution {
public:
    int ans=0;
    
    int pathSum(TreeNode* root, int targetSum) {
       if(!root)return 0;
        unordered_map<int,int> h;
        h[0]=1;
        solve(root,0,targetSum,h);
        return ans;
        
    }
    void solve(TreeNode* root,int cs,int ts,unordered_map<int,int> &h){
       //base case 
        if(!root)return;
        
        //recursive case
        cs+=root->val;
        if(h.count(cs-ts)){
            ans+= h[cs-ts];
        }
        if(h.count(cs)==0){
            h[cs]=1;
        }
        else{
            h[cs]++;
        }
        solve(root->left,cs,ts,h);
        solve(root->right,cs,ts,h);
        h[cs]--;
    }
};











