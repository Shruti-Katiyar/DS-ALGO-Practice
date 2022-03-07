//Maximum Winning score
https://practice.geeksforgeeks.org/problems/4ead9c3991a3822f578309e2232bc5415ac35cb9/1#
lass Solution {
  public:
    
    long long findMaxScore(Node* root)
    {
        //Nichay say start kro  3rd level say or jo maxm hogha wo include kreghy  path m
        //2 1 :: 2 maxm h wo include kreghy sum m similarly 3 4 :: 4 maxm h
        //similarly 2 level m bhi maxm walla considered kro
        
        //maxm layeghy left or right ka
        if(root==NULL)return 0;
        if(root->left==NULL and root->right==NULL)//agar leaf node h
        return root->data;
        
        long long left=findMaxScore(root->left);
        long long right=findMaxScore(root->right);
        return root->data*max(left,right);
        
        
    }
};
