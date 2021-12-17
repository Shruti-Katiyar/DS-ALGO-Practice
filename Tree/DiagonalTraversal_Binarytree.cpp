//Diagonal Traversal of Binary Tree (gfg)

vector<int> diagonal(Node *root)
{
   // your code here
   queue<Node *>q;
   vector<int> ans;
   if(!root)return ans;
    q.push(root);
   while(!q.empty()){
      
       Node*temp=q.front();
       q.pop();
       while(temp){
           if(temp->left)//push temp->left in queue then print temp->data then move temp to its right
           q.push(temp->left);
           ans.push_back(temp->data);
           temp=temp->right;
       }
   }
   return ans;
}
//TC:O(N) SC:O(N)
