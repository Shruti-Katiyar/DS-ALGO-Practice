//Leaf at same level (gfg)
class Solution{
  public:
  
  void solve(Node*root ,int h,int &m ,bool &flag){
      if(!root)return;
      if(flag==false)return;
      if(!root->left and !root->right){//leaf node
          if(m==-1){
              m=h;
          }
          else{
              if(h!=m){
              flag=false;
          }
      }
     
  }
      solve(root->left,h+1, m ,flag);
      solve(root->right,h+1, m ,flag);
  }
  
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        //Your code here
        bool flag=true;
        int m=-1;
        int h=0;
        
        solve(root,h,m,flag);
        return flag;
    }
};
//TC:O(N)
//SC:O(N)

