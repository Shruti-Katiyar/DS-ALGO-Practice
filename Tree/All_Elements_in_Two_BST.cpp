//All Elements in Two Binary Search Trees
https://leetcode.com/problems/all-elements-in-two-binary-search-trees/submissions/

//Naive Approach
//Traverse both the tree and store its value in a vector.
//Sort the vector and return.

class Solution {
public:
    vector<int> ans;
    void solve(TreeNode* root){
        if(root==NULL)
            return;
      
        solve(root->left);
         ans.push_back(root->val);
        solve(root->right);
           
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        solve(root1);
        solve(root2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
//TC:O(NlogN)  using sorting.
//SC:O(N) return total elements of both trees.

//Optimised Approach


