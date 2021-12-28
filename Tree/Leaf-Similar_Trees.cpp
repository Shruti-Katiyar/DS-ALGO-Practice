// Leaf-Similar Trees
class Solution {
public:
    //store all the leaf node in vector then compare both the vectors
    //if both the vector are same then return true
    vector<int> tree1;
    vector<int> tree2;
    
    void dfs(TreeNode* root, vector<int> &v) {
        // checking if it is a leaf
        if (root->left==NULL && root->right==NULL) {
            // if so, we store the result and exit
            v.push_back(root->val);
            return;
        }
        // otherwise, we proceed deeper left first if it exist, backtracking to right later
        if (root->left) dfs(root->left, v);
        if (root->right) dfs(root->right, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        // running checks only if the base trees are not empty
        if (root1) dfs(root1, tree1);
        if (root2) dfs(root2, tree2);
        return tree1 == tree2;
    }
};
