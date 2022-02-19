//Recover a Tree From Preorder Traversal
class Solution {
public:
    int i=0;
    int l=0;
     TreeNode* solve(string s,int level=0){
         
         if(i==s.length())return NULL;
         
         int no=0;
         while(i<s.length() && s[i]!='-'){
             no=10*no+(s[i]-'0');
             i++;
         }
         l=0;
         while(i<s.length()&&s[i]=='-'){
             i++;
             l++;
         }
           TreeNode*root=new TreeNode(no);
         if(l==level+1){
             root->left=solve(s,level+1);
         }
          if(l==level+1){
             root->right=solve(s,level+1);
         }
             
         
       return root;  
     }
    TreeNode* recoverFromPreorder(string traversal) {
         TreeNode* root=solve(traversal);
        return root;
    }
};
