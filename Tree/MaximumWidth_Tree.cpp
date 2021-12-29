//Maximum Width of Tree (gfg)
class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        // Your code here
        if(root==NULL)return 0;
         
        queue<Node*> q;
        q.push(root);
        int width=0;
        while(!q.empty()){
            int n=q.size();
            width=max(width,n);
            for(int i=0;i<n;i++){
                Node* cur=q.front();
                q.pop();
                
                if(cur->left!=NULL)q.push(cur->left);
                if(cur->right!=NULL)q.push(cur->right);
            }
        }
        return width;
    }
    
};
